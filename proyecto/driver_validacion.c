#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cajero.h"

void evaluar_prueba(int condicion, const char* nombre_prueba) {
 if (condicion)
   printf("[ÉXITO] %s\n", nombre_prueba);
 else
   printf("[FALLO] %s\n", nombre_prueba);
}

int main() {
  CuentaBancaria cuenta_prueba;
  printf("--- INICIANDO BATERÍA DE PRUEBAS DE LA BIBLIOTECA ---\n\n");

  // 1. Prueba de Inicialización
  inicializar_cuenta(&cuenta_prueba, 1001, 1234, 500.0);
  evaluar_prueba(cuenta_prueba.numero_cuenta == 1001 && 
    cuenta_prueba.nip == 1234 && 
    cuenta_prueba.saldo == 500.0 && 
    cuenta_prueba.nombre_titular == NULL, 
    "Inicializacion correcta de variables y apuntador NULL");

  // 2. Prueba de Asignación de Memoria (Nombre)
  modificar_nombre(&cuenta_prueba, "Estudiante Prueba");
  evaluar_prueba(cuenta_prueba.nombre_titular != NULL && 
  strcmp(cuenta_prueba.nombre_titular, "Estudiante Prueba") == 0, 
    "Asignacion de memoria dinamica y copiado de nombre");

  // 3. Pruebas de Ingreso de Saldo
  int res_ingreso_valido = ingresar_saldo(&cuenta_prueba, 250.0);
  evaluar_prueba(res_ingreso_valido == 1 && cuenta_prueba.saldo == 750.0, 
    "Ingresar saldo valido (+250.0)");

  int res_ingreso_invalido = ingresar_saldo(&cuenta_prueba, -100.0);
  evaluar_prueba(res_ingreso_invalido == 0 && cuenta_prueba.saldo == 750.0, 
    "Rechazar ingreso de monto negativo (-100.0)");

  // 4. Pruebas de Retiro de Saldo
  int res_retiro_valido = retirar_saldo(&cuenta_prueba, 150.0);
  evaluar_prueba(res_retiro_valido == 1 && cuenta_prueba.saldo == 600.0, 
    "Retirar saldo valido (-150.0)");

  int res_retiro_exceso = retirar_saldo(&cuenta_prueba, 1000.0);
  evaluar_prueba(res_retiro_exceso == 0 && cuenta_prueba.saldo == 600.0, 
    "Rechazar retiro por fondos insuficientes");

  int res_retiro_negativo = retirar_saldo(&cuenta_prueba, -50.0);
  evaluar_prueba(res_retiro_negativo == 0 && cuenta_prueba.saldo == 600.0, 
    "Rechazar retiro de monto negativo (-50.0)");

  // 5. Pruebas de Modificación de NIP
  int res_nip_invalido = modificar_nip(&cuenta_prueba, 0000, 4321);
  evaluar_prueba(res_nip_invalido == 0 && cuenta_prueba.nip == 1234, 
    "Rechazar cambio de NIP proporcionando NIP actual incorrecto");

  int res_nip_valido = modificar_nip(&cuenta_prueba, 1234, 4321);
  evaluar_prueba(res_nip_valido == 1 && cuenta_prueba.nip == 4321, 
    "Aceptar cambio de NIP proporcionando NIP actual correcto");

  // 6. Prueba Visual de Impresión
  printf("\n--- PRUEBA VISUAL DE IMPRESIÓN (imprimir_cuenta) ---\n");
  imprimir_cuenta(&cuenta_prueba);

  // 7. Prueba de Limpieza de Memoria
  if (cuenta_prueba.nombre_titular != NULL) {
    free(cuenta_prueba.nombre_titular);
    cuenta_prueba.nombre_titular = NULL;
    evaluar_prueba(cuenta_prueba.nombre_titular == NULL, 
      "Liberacion correcta de la memoria dinamica (free)");
  }

  printf("\n--- BATERÍA DE PRUEBAS FINALIZADA ---\n");
  return 0;
}
