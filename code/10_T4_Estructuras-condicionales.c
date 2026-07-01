#include<stdio.h>

int main(){
    int a = 4, b = 3;

    if(a == 5){
        printf("Son iguales\n");
    }

    puts("Ola, yo siempre salgo");

    if(b == 5){
        printf("b es 5\n");
    }
    else{
        if(a == 5){
            printf("b no es 5, y a es 5\n");
        }
        else{
            printf("b no es 5, y a no es 5\n");
        }
    }

    if(a == 4)
        printf("no es 4\n");
    else
        printf("si es 4\n"); // Es parte del else
        printf("ola\n"); // Ya no es parte del else
    
    
    int c = 5, d = 5;

    if(c == 5 && d == 5){  // Operador AND (&&). Ambas deben cumplirse
        printf("ambas son 5\n");
    }
    else{
        printf("no ambas son 5\n");
    }

    if(c == 5 || d == 4){ // Operador OR (||). Al menos una debe cumplirse
       puts("Al menos una se cumple."); 
    }

    if(!(c == 4)){ //Operador NOT (!). Lo contrari.
        puts("No se cumple que c sea 4");
    }

    if(c != d){
        puts("Son distintos");
    }
}
