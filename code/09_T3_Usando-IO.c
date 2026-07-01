#include <stdio.h>

int main() {
    int unInt = 123, otro = 100000;
    float unFloat = 3.1415;
    char unChar = '@';

    // Imprimir texto directo
    printf("Esto es una cadena literal.\n");
    
    // Impirmir variables
    // Usar especificadores de formato: %d, %i, %f...
    printf("Valor de mi entero:\t%d\n",unInt);
    printf("Mi otro entero:\t%i\n",otro);

    printf("Mi valor flotante:\t%f\n",unFloat);

    printf("Un char:\t%c\n",unChar);

    // Puts es un printf que ya tiene el \n
    printf("Un char como entero:\t%d\n",unChar);
    printf("Usando para ASCII:\t%c\n",64);

    // %ld lond digit (int), lf (long float) double ld (long double)
    // size_t, unsigned int


    // Buffer de entrada
    printf("Ingrese un entero\n");
    scanf("%d", &unInt);
    printf("El número ingresado es: %d\n", unInt);
    
    scanf(" %c", &unChar);
    printf("El caracter ingresado es: %c\n ", unChar);

    //en vez del scanf(caracter)
    unChar = getchar();
    printf("El segundo caracter ingresado es: %c", unChar);

    // Leer 3 enteros separados por un espacio
    int a, b, c;
    scanf("%i\n%i\n%i", &a, &b, &c);
    printf("Los numeros ingresados son: %i, %i, %i", a, b, c);

    // Operador dirección "&":
    // Accede a la dirección de memoria de la variable siguiente
    // &a, &b, &c
    
    printf("%ld", &a);
    
    // Limpiar el buffer DE SALIDA (no está definido para el buffer de entrada):
    fflush(stdout);
    fflush(stdin); //No está definido

    return 0;
}
