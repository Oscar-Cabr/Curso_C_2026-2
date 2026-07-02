#include<stdio.h>

/*
  Recursividad: Una función que se llama a sí misma.
  Casi todos los algoritmos recursivos se pueden
    expresar también como iterativos (ciclos).

  Recursividad aplica a cualquier recurrencia.

  Ejemplo, factorial:
si n > 1:    fact(n) = n * fact(n-1);
si n = 1 : 1

  Ejemplo, fibonacci:
si n > 1:    fibo(n) = fibo(n-1) + fibo(n-2)
si n = 1: 1
si n = 0: 1
*/

long int factorialIterativo(int n) {
  int f = 1;
  for(int i = n; i >= 1; i--) f *= i;
  return f;
}

// Factorial recursivo
long int fact(int n) {
  printf("n tiene el valor:\t%d\n",n);
  if( n == 1 ) // Caso base
    return 1;
  return n * fact(n-1); // Caso recursivo
}

int main() {
  int n;
  printf("Dame el numero para ver su factorial:\t");
  scanf("%d",&n);

  // Primer llamada recursiva
  long int f = fact(n);

  printf("El factorial es:\t%ld\n",f);

  return 0;
}
