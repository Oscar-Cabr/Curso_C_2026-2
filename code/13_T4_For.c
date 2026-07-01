#include<stdio.h>
int main() {
/*
  Ciclo for, sintaxis:
  
  for(<inicializacion>; <condicion>; <incremento>) {
    <instrucciones>
  }

  La diferencia entre el ciclo while y el for:
    While repetición indefinida.
    For es repetición definida.
*/
  int i = 0, n = 10;
  printf("Antes del for:\t%d\n\n",i);
  for(i = 0; i < n; i++) {
    printf("Estamos en la iteracion:\t%d\n",i);
  }
  printf("\nDespues del for:\t%d\n",i);

  puts("");
  puts("Numeros pares");
  for(i = 0; i < 14; i += 2) {
    printf("%i\t",i);
  }

  return 0;
}
