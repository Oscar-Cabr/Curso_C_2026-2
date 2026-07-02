#include<stdio.h>

/*
  Prototipo: Firma de la función
  
  Escribir el prototipo de una función
    es declarar la función.
*/

// Escribiendo prototipos de las funciones
int suma(int x, int y);
int dividir(int x, int y);

int main() {
  int a, b, c;
  printf("Dame los números que quieres operar:\t");
  scanf("%d %d",&a,&b);

  c = suma(a,b);
// c = 27.00;
  printf("El resultado de la suma es:\t%d\n\n",c);

  c = dividir(a,b);
  printf("El resultado de la división es:\t%d",c);

  return 0;
}

// Escribiendo definición de las funciones
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
