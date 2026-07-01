#include<stdio.h>

int main() {
  int a = 1, b = 2;

/*
  Sintaxis del operador ternario:

  <condicion> ? <instruccion if> : <instruccion else>;
*/

  puts("if-else dice:");
  if( a == b ) puts("a == b");
  else puts("a != b");

  puts("Ternario dice:");
  a == b ? puts(" a == b") : puts("a != b");

// Ternario hace yield: por defecto devuelve un valor
 
  char resIfElse, resTernario;
  if( a > b ) resIfElse = 'a';
  else resIfElse = 'b';
  printf("if-else dice:\t%c\n",resIfElse);

  resTernario = a > b ? 'a' : 'b';
  printf("Ternario dice:\t%c",resTernario);

  return 0;
}
