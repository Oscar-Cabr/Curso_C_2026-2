#include <stdio.h>

/*
  Quiero que me retorne no solo el valor de la división entera, sino también el resto.

  En la división:
    a / b = a * cb + r
  En C:
    'a / b' devuelve 'c'.
  Yo quiero que también me devuelva 'r'.

  El problema: estamos limitados por la sintaxis de las funciones en C, que
  solo permite definir UN solo valor de retorno.
*/
void division_completa(int a, int b, int* c, int* r) {
  if(b == 0) return;
  *c = a / b;
  *r = a % b; // % es operación módulo: a % se define como el residuo de efectuar a / b
  return;
}
int division_classic(int a, int b) {
  if( b == 0 ) return -1;
  return a / b;
}

int main() {
  int x, y, multiplo, residuo;
  printf("Dame los dos números que quieres dividir:\t");
  scanf("%d %d",&x,&y);
  division_completa(x,y,&multiplo,&residuo);
  printf("El resultado de la division %d/%d es:\t%d\n Y residuo:\t%d\n",x,y,multiplo,residuo);
  return 0;
}
