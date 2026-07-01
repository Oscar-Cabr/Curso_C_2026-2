// Arreglos
// Arreglar
// Algo que está arreglado (estructura)
//
// Un arreglo es un conjunto de elementos del mismo tipo
// Están almacenados en direcciones contiguas

/*
 *  Sintaxis:
  
    <tipo-de-dato> <identificador>[<tamaño del arreglo>]

 *
 * */

#include<stdio.h>

int main(){
  float calificaciones[5] = {9.5, 6.7, 8.2, 9.3, 10}; // Tiene 5 elementos
  int notas[10];
  char letras[123];

  // Inicialización
  int conjunto[5] = {1, 2, 3, 4, 5};
  int n = 5;

  float suma = 0;

  for(int i = 0; i < n-1; i++){
    suma += calificaciones[i];
  }
  suma += calificaciones[n-1];

  float promedio = suma / n;

  printf("%f", promedio);


  int edad[3]; // Tiene índices 0, 1, 2.
  // Para acceder al último elemento usamos edad[3-1] = edad[2];

  int i;
  for(i = 0; i < 2; i++){
    printf("Ingrese la edad %i:\n", i);
    scanf("%i", &edad[i]);
  }
  printf("Ingrese la edad %i:\n", i);
  scanf("%i", &edad[i]);

  for(i = 0; i < 3; i++){
    printf("%i ", edad[i+1]);
  }
  // calificaciones[0] = 9.5
}
















