#include<stdio.h>

/*
  RESUMEN
    1. Contexto de la programación
    2. Contexto de C
    --- Programación
    3. Sintaxis básica ("Hola, mundo", variables,
      datos primitivos, entrada y salida, comentarios)
    4. Estructuras de control (de flujo): if-else, ternario
      switch, for, while, do-while
    5. Arreglos

  6. Funciones

  Encapsulamiento de algoritmos.
  Fragmentos de código reutilizable en cualquier contexto.
    
  Sintaxis:

  <tipo de retorno> <identificador>( <parametros> ) {
    <definicion>
  }

  Una función debe cumplir un propósito, y solo uno.
  (Principio de responsabilidad única)
*/
int suma(int x, int y) {
  int resultado;
  resultado = x + y;
  return resultado;
}
int dividir(int x, int y) {
  int res;
  res = x / y;
  return res;
}
void miFuncion() {
  puts("Hola, acabo de entrar.");
  return;

  puts("Adios.");
  return;
}

int main() {
  int a, b, c;
  printf("Dame los números que quieres operar:\t");
  scanf("%d %d",&a,&b);

  if(a == 7 || b == 7) {
    puts("No me gustan esos números.");
    return 1;
  }

  c = suma(a,b);
// c = 27.00;
  printf("El resultado de la suma es:\t%d\n\n",c);

  c = dividir(a,b);
  printf("El resultado de la división es:\t%d\n\n",c);

  suma(a,b);
  miFuncion();

  return 0;
}
