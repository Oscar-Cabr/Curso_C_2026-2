#include<stdio.h>

/*
 Arreglos multidimensionales:
    Varias dimensiones a la vez

    Arreglo de arreglos
 */

int main(){
    int arreglo[2][3][4] = {
        {
            {5, 8, 10, 4},
            {7, 9, 10, 3},
            {6, 3, 2, 5}
        },
        {
            {10, 10, 10, 9},
            {5, 8, 4, 2}, // jafet
            {10, 9, 10, 8}
        }
    };
    

    arreglo[1][1][3] = 10;

    printf("%i\n\n\n\n", arreglo[1][1][3]);
    
    // i o idx o index

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                printf("%i ", arreglo[i][j][k]);
            }
            puts("");
        }
        printf("\n\n");
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%i ", arreglo[0][i][j]);
        }
        puts("");
    }
} 
