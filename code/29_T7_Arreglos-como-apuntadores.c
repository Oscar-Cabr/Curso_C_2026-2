#include <stdio.h>

// Un arreglo es un apuntador

void imprimir_arreglo(int* arr, int n) {
  puts("");
  for(int i = 0; i < n; i++)
    printf("%d ",arr[i]);

  puts("");
  for(int i = 0; i < n; i++)
    printf("%d ",*(arr+i));
  // *(ptr + 1) <=> arr[i]
  return;
}

int main() {
/*
  Un arreglo se define como: Una colección de elementos del mismo tipo
    Y que se almacena de forma contigua.

  Si tu, apuntas al valor inicial de un arreglo con un apuntador.
  Y luego incrementas el VALOR del apuntado (no la variable a la que apunta),
  estarás incrementando la dirección de memoria que guardaba el apuntador,
  es decir, coincidirá con el elemento siguiente en el arreglo al que apuntaba.
*/
  int arr[3] = {1,2,3};
  int* ptr;
  ptr = &arr[0];

  printf("'*ptr':\t\t%d\n",*ptr);
  printf("Arreglo:\t");
  for(int i = 0; i < 3; i++) printf("%d ",arr[i]);
  puts("");

  // Aritmética de apuntadores
  ptr++;

  printf("'*ptr':\t\t%d\n",*ptr);
  printf("Arreglo:\t");
  for(int i = 0; i < 3; i++) printf("%d ",arr[i]);
  puts("");
  
  ptr++;

  printf("'*ptr':\t\t%d\n",*ptr);
  printf("Arreglo:\t");
  for(int i = 0; i < 3; i++) printf("%d ",arr[i]);
  puts("");

  int* ptr1 = &arr[1], *ptr2 = &arr[2];
  printf("La diferencia entre ptr1 y ptr2 es:\t%d\n",ptr2-ptr1);
  printf("La diferencia entre ptr1 y ptr2 es:\t%ld\n",ptr2-ptr1);
  printf("La diferencia entre ptr1 y ptr2 es:\t%p\n",ptr2-ptr1);

  int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
  imprimir_arreglo(&arr2[0],10);
  imprimir_arreglo(arr2,10);

  // Existen apuntadores a apuntadores :D
  int** ptr3 = &ptr2;
  int*** ptr4 = &ptr3;
  
  return 0;
}
