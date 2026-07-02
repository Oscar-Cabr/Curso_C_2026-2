#include<stdio.h>

void no_modifica(int x, int y) {
  x = y;
  y = 1;
  puts("=== FUNCION 1 ===");
  printf("a:\t%d\nb:\t%d\n",x,y);
  puts("-----------------");
}
void si_modifica(int* x, int* y) {
  *x = *y;
  *y = 1;
  puts("=== FUNCION 2 ===");
  printf("a:\t%d\nb:\t%d\n",*x,*y);
  puts("-----------------");
}

int main() {
  int a, b;
  printf("Dame los números que quieres operar:\t");
  scanf("%d %d",&a,&b);

  printf("a:\t%d\nb:\t%d\n\n",a,b);
  no_modifica(a,b);
  printf("\na:\t%d\nb:\t%d\n\n",a,b);
  si_modifica(&a,&b);
  printf("\na:\t%d\nb:\t%d\n\n",a,b);
  /*
   Lo que hizo la función no afectó a mis variables
   originales.

   Es decir: los argumentos no sufrieron modificaciones.
   Los que se modificaron, fueron los parámetros.

   Los parámetros son copias de los argumentos.
  */

  return 0;
}
