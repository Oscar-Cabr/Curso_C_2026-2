#include <stdio.h>
int main() {
  float* ptr = ((void*)0); //<- Es NULL (su nombre real)
  float* ptr2 = NULL;

  printf("Imprimo 'ptr':\t%p\n",ptr);
  printf("Imprimo '*ptr':\t%f\n",*ptr);

  // No puedes imprimir el "valor" de NULL

  return 0;
}
