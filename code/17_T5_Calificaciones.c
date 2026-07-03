#include<stdio.h>

int main(){
    float calificaciones[5];
    
    for(int i = 0; i < 5; i++){
        printf("Ingrese la calificación %i: ", i);
        scanf("%f", &calificaciones[i]);
    }


    for(int i = 0; i < 5; i++){
        printf("%.2f ", calificaciones[i]);
    }
    
   float suma = 0;

    for(int i = 0; i < 5; i++){
        suma += calificaciones[i];
    }

    printf("\n%.2f\n", suma);
    
    float promedio = suma / 5;

    // suma = suma / 5;
    suma /= 5;

    printf("%f %f", promedio, suma);
}
