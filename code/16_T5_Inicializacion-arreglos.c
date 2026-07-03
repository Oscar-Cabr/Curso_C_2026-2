#include<stdio.h>

int main(){
    /*
     * float precioComida[1000] = {5.4};

    printf("%f %f\n", precioComida[0], precioComida[800]);

    */
    int arreglito[5];
    
    for(int i = 0; i < 5; i++){
        //printf("%i ", arreglito[i]);
    }

    int var = 3;
    int arreglo2[] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++){
        printf("%i ", arreglo2[i]); // Imprime 1 2 3 4
    }
    printf("\n");
    arreglo2[var] = 100; // Cambia de 4 a 100
    arreglo2[0] = 50; // Cambia de 1 a 50
    
    for(int i = 0; i < 4; i++){
        printf("%i ", arreglo2[i]); // Imprime 50 2 3 100
    }


    return 0;
}
