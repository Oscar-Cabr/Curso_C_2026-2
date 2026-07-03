#include<stdio.h>

/*
    Como no podemos almacenar palabras en una variable, tenemos que recurrir a conjuntos de caracteres, es decir, arreglos de char. 
    A estos arreglos los conocemos como strings.
 
    \0 es una sentencia de escape que le indica al lenguaje dóńde debe detenerse de leer ese string
    
    En la lectura de un string va a leer hasta el primer espaio o salto de linea

    Biblioteca <string.h>

*/

int main(){
    char palabra[] = "Hola mundo\n Esta es otra linea\t si";
    char palabra2[5] = {'H', 'o', 'l', 'a'};
    
    for(int i = 0; i < 5; i++){
        printf("%c", palabra[i]);
    }
    puts("");
    printf("%s\n", palabra);

    palabra[0]= 'b';
    palabra2[3] = 'o';

    printf("%s %s", palabra, palabra2);


    printf("Hola soy un texto\n");

    char frase[] = "Hola soy otro texto";
    printf("%s", frase);

    char ini[10];

    printf("\n%s\n", ini);


    puts("Ingrese una cadena");
    char cadena[100];
    scanf("%s", cadena);

    printf("\n%s", cadena);
}
