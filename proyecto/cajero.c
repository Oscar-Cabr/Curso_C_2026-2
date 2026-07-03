#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cajero.h"

void inicializar_cuenta(CuentaBancaria* cuenta, int num_cuenta, int nip_inicial, float saldo_inicial) {

}

void modificar_nombre(CuentaBancaria* cuenta, char* nuevo_nombre) {

}

int modificar_nip(CuentaBancaria* cuenta, int nip_actual, int nip_nuevo) {
  if( cuenta -> nip == nip_actual) {
    cuenta -> nip = nip_nuevo;
    return 1;
  }
  return 0;
}

int retirar_saldo(CuentaBancaria* cuenta, float monto) {

}

int ingresar_saldo(CuentaBancaria* cuenta, float monto) {
  if( monto > 0 ) {
    cuenta -> saldo += monto;
    return 1;
  }
  return 0;
}

void imprimir_cuenta(CuentaBancaria* cuenta) {

}
