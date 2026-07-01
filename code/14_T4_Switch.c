#include<stdio.h>
int main() {
/*
  Switch
  
  Sintaxis:

  switch(<identificador>) {
    case '<valor1>':
      <instrucciones>
      break;
    case '<valor2>':
      <instrucciones>
      break;
    <...>
    default:
      <instrucciones>
  }
*/
  int menu;
  do{
    printf("\n\n¿Que quieres hacer?\n"
      "\t1. Recibir un 'ola'\n"
      "\t2. Recibir un 'adios'\n"
      "\t0. Salir.\n\t");
    scanf("%d",&menu);

    switch(menu) {
      case 0: break;
      case 1:
        puts("Hola, pero hola de saludo, no ola de mar.");
        break;
      case 2:
        puts("Adio.");
        break;
      default:
        puts("Opción no válida. (Indefinida)");
    }
  }while( menu != 0 );

  return 0;
}
