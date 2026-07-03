#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cajero.h"

int main() {
  int menu;
  do{
    printf("\n¡Bienvenido a Ñu!, ¿qué quires hacer?\n");
    printf("  0. Salir.\n"); 
    printf("  1. Opción 1.\n");
    printf("  2. Opción 2.\n");
    printf("  3. Opción 3.\n");
    printf("  4. Opción 4.\n");
    printf("Tu decisión:\t");
    scanf("%d",&menu);

    switch(menu) {
      case 0:
        printf("Gracias por usar Ñu, ¡nos vemos!\n");
        break;
      case 1:
        // Función que ejecuta la lógica de la opción 1.
        break;
      case 2:
        // Función que ejecuta la lógica de la opción 2.
        break;
      case 3:
        // Función que ejecuta la lógica de la opción 3.
        break;
      case 4:
        // Función que ejecuta la lógica de la opción 4.
        break;
      default:
        printf("Opción no válida.\n");
    }
  }while(menu != 0);

  return 0;
}
