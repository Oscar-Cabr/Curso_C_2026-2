// Entrada y salida estándar
#include<stdio.h>
int main(){
  /* Lectura y escritura
    Leer: Guardar datos
    Escribir: Imprimir datos

    Lectura = Entrada
    Escritura = Salida

    Flujo de entrada y salida.

    Entrada estándar: Teclado.
    Salida estándar: Pantalla de la terminal.
  */

  // Print function - Función de impresión
  printf("Hola, estoy escribiendo. Uso el canal salida: muestro en la terminal.");
  // Scan function - Función de escaneo
//  scanf();
  
  int a;
  scanf("%d",&a);
  printf("%d",a);

/*
  <> -> Algo que tú tienes que definir.
  [] -> Algo opcional.
  Lo demás -> Coincidencia exacta.
  Nota: id -> identificador.

  Sintaxis de printf:
    printf("<formato>"[,<argumentos>]);
  
  Sintaxis de scanf:
    scanf("<formato>",&<id>);

  <formato> : Puede contener cadenas de texto explícitas y especificadores de formato.
    Cadenas de texto explícitas: Cualquier texto que no cambia, se ve tal cual se escribe.
    Especificadores de formato: %d, %i, %f, %ld, %lf, %d, %c, %s
      Representan la inclusión del valor de una variable de cierto tipo.
    Secuencias de escape: \n, \t, \0, \\, \"
  [,<argumentos>] : identificadores, o caracteres unicode
*/
  printf("\nola, pero ola de mar.\nHola de saludo.\n\nUna línea de separacíon.\n");

  printf("Frase.\tOtra frase.");

  int unInt = 10;
  float unFloat = 18.5;
  char unChar = '@';

  return 0;
}
