/**
 * @file cajero.h
 * @brief Biblioteca principal para el sistema de "Banca Ñu".
 * * Define el Tipo de Dato Abstracto (TDA) para manejar cuentas bancarias
 * y los prototipos de funciones para realizar operaciones financieras básicas.
 * * @author Racso Fractal
 */

#ifndef CAJERO_H
#define CAJERO_H

/**
 * @brief Estructura que representa una cuenta bancaria individual.
 * * Almacena los datos personales del cliente, sus credenciales de seguridad 
 * y el balance actual. 
 * * @warning Dado que nombre_titular es un apuntador a memoria dinámica, 
 * el alumno debe asegurarse de inicializarlo en NULL al crear una variable 
 * de este tipo en el main, y de usar free() antes de terminar el programa.
 */
typedef struct {
  char* nombre_titular;  /**< Apuntador al nombre del cliente (memoria dinámica). */
  int numero_cuenta;     /**< Identificador único de la cuenta. */
  int nip;               /**< Número de Identificación Personal (4 dígitos numéricos). */
  float saldo;           /**< Dinero actual disponible en la cuenta. */
} CuentaBancaria;

/**
 * @brief Inicializa una cuenta bancaria con sus valores default.
default * * Configura el número de cuenta, el NIP y el saldo inicial. Lo más importante 
 * es que inicializa el apuntador del nombre del titular en NULL, lo cual es 
 * un paso obligatorio de seguridad para evitar errores de memoria (Segmentation 
 * Fault) al momento de asignar o modificar el nombre posteriormente.
 * * @param cuenta Apuntador a la estructura CuentaBancaria que se va a inicializar.
 * @param num_cuenta El número de cuenta bancaria que se le asignará.
 * @param nip_inicial El NIP de 4 dígitos de seguridad inicial.
 * @param saldo_inicial El monto de dinero con el que se apertura la cuenta.
 */
void inicializar_cuenta(CuentaBancaria* cuenta, int num_cuenta, int nip_inicial, float saldo_inicial);

/**
 * @brief Asigna o actualiza el nombre del titular de la cuenta.
 * * Esta función se encarga de liberar la memoria previa (si existía) y 
 * solicitar nueva memoria dinámica (malloc/realloc) con el tamaño exacto 
 * necesario para almacenar la nueva cadena de caracteres.
 * * @param cuenta Apuntador a la estructura CuentaBancaria que se va a modificar.
 * @param nuevo_nombre Cadena de caracteres estática o dinámica con el nuevo nombre.
 */
void modificar_nombre(CuentaBancaria* cuenta, char* nuevo_nombre);

/**
 * @brief Cambia el NIP de seguridad de la cuenta bancaria.
 * * Valida que el usuario conozca su NIP actual antes de permitir 
 * la sobrescritura por el nuevo valor.
 * * @param cuenta Apuntador a la estructura CuentaBancaria objetivo.
 * @param nip_actual El NIP que la cuenta tiene registrado actualmente.
 * @param nip_nuevo El nuevo NIP que se desea registrar.
 * @return 1 si el cambio fue exitoso, 0 si el nip_actual es incorrecto.
 */
int modificar_nip(CuentaBancaria* cuenta, int nip_actual, int nip_nuevo);

/**
 * @brief Extrae dinero del saldo de la cuenta.
 * * Verifica las reglas de negocio básicas: que el monto sea un valor 
 * positivo y que la cuenta tenga fondos suficientes para cubrir el retiro.
 * * @param cuenta Apuntador a la estructura CuentaBancaria objetivo.
 * @param monto Cantidad monetaria a retirar.
 * @return 1 si el retiro fue exitoso, 0 si el monto es inválido o no hay fondos.
 */
int retirar_saldo(CuentaBancaria* cuenta, float monto);

/**
 * @brief Agrega dinero al saldo de la cuenta.
 * * Valida que no se intenten depositar valores negativos.
 * * @param cuenta Apuntador a la estructura CuentaBancaria objetivo.
 * @param monto Cantidad monetaria a depositar.
 * @return 1 si el depósito fue exitoso, 0 si el monto ingresado es negativo o inválido.
 */
int ingresar_saldo(CuentaBancaria* cuenta, float monto);

/**
 * @brief Imprime en la salida estándar (consola) los datos de la cuenta.
 * * Despliega un formato tabular o de lista con el nombre del titular, 
 * el número de cuenta y el saldo actual con dos decimales de precisión.
 * * @param cuenta Apuntador a la estructura CuentaBancaria que se desea consultar.
 */
void imprimir_cuenta(CuentaBancaria* cuenta);

#endif
