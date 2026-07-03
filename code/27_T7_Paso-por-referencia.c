#include <stdio.h>

/*
  Por defecto, las parámetros con copias del argumento. Hacer
  esto, se llama "paso por valor". (Copiar el argumento en el parámetro)

  El llamado "paso por referencia" signfica declarar los parámetros
  como apuntadores, que apuntan a los argumentos.
  Lo que te permite trabajar en el parámetro, sobre el argumento (y no una copia).
*/
void decrementar(int* p) {
//  p--; <- Hacer esto, decrementa en 1 la *dirección de memoria que tiene guardada*
  (*p)--;
  return;
}

int main() {
  int x = 10;
  printf("Valor de 'x':\t%d\n",x);
  decrementar(&x);
  printf("Valor de 'x':\t%d\n",x);
}
