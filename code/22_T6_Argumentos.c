#include<stdio.h>

// parametros 
int suma(int x, int y);

int main() {
  int a, b, c, res, x1 = 1, x2 = 123, x3 = 18;
  printf("Dame los números que quieres operar:\t");
  scanf("%d %d",&a,&b);

  // Cuando se manda a llamar, a y b son ARGUMENTOS
  c = suma(a,b);
  printf("La suma 1:\t%d\n",c);

  // argumentos
  res = suma(x1,x3);
  printf("La suma 2:\t%d\n",res);

  // argumentos
  res = suma(b,x2);
  printf("La suma 3:\t%d\n",res);

  return 0;
}

// x e y son placeholders, PARÁMETROS
int suma(int x, int y) {
  int resultado;
  resultado = x + y;
  return resultado;
}
