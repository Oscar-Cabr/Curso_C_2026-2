#include<stdio.h>
int main() {
/*
  Las estructuras iterativas (o de repetición) permiten
  ejecutar un mismo bloque de código *varias veces*,
  en específico, mientras una condición se cumpla.

  Existen tres estructuras:
    1. while
    2. do-while
    3. for

  La más secilla de todas es el while, cuya sintaxis es:

  while(<condicion>) {
    <instrucciones>
  }
*/
  // Contamos desde 1
  int contador = 1;
  while( contador <= 10 ) {
    printf("El contador actual es:\t%d\n",contador);
    contador = contador + 1;
  }

  // Contamos desde 0
  int suma_total = 0;
  contador = 0;
  printf("La suma total al inicio es:\t%d\n",suma_total);
  while( contador < 100 ) {
//    suma_total = suma_total + 10;
    suma_total += 10;
//    contador = contador + 1;
//    contador += 1;
    contador++;
  }
  printf("La suma total al final es:\t%d\n",suma_total);

/*
  La única diferencia entre el while y el do-while,
  es que el do-while siempre se ejecuta al menos
  una vez

  do{
    <instrucciones>
  }while(<condicion>);
*/
  int usuario;
  do{
    puts("Dame tu número:");
    scanf("%d",&usuario);
  }while( usuario != -1);

  return 0;
}
