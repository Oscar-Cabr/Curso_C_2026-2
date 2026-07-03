#include <stdio.h>

/*
  Apuntador: Variable que guarda la dirección de memoria
  de otra variable. (Así como int guarda enteros,
  float guarda reales, y char guarda caracteres)

  Es común llamarles punteros (pointer).

  Un apuntador solo puede guardar direcciones de memoria
  de las variables cuyo tipo coincida con su declaración.
    Existen apuntadores para cada primitivo:
      - int
      - float
      - char
      - long int
      - short int
      - double
      - long double
      - ...

  Se declaran con la sintaxis:
    <tipo dato> *<id>;
*/

int main() {
  // Declaración
  int *apuntador; //<- Notación que NO me gusta (Pero que está en toda la literatura)
  int* apuntador2; //<- Notación que hace feliz a Racso :D

//  int *a, *b, *c; <- Declaración incorrecta
  int* aa, bb, cc;

  // Inicialización
  int a = 1;
//  int* ptr = a; //<- Inválido: Estás asignando tipo int (entero) a int* (apuntador a entero)
// Un apuntador guarda direcciones de memoria, hay que asignarles direcciones de memoria
  int* ptr = &a;

  //! No puedes usar apuntadores sin asignarles un valor válido

  // Asignación
  int b = 47;
  int* ptr2;
  ptr2 = &b;

  // Impresión
  printf("Imprimo mi entero 'b':\t%d\n",b);
  printf("Imprimo mi apuntador 'ptr':\t%i\t<- Con %ci\n",ptr2,37);
  printf("Imprimo mi apuntador 'ptr':\t%d\t<- Con %cd\n",ptr2,37);
  printf("Imprimo mi apuntador 'ptr':\t%ld\t<- Con %cd\n",ptr2,37);
  printf("Imprimo mi apuntador 'ptr':\t%p\t<- Con %cp\n",ptr2,37);

  // Operador indirección (*)
  // Permite manipular el valor de la variable a la que apunta
  printf("\nImprimo el valor de 'b':\t%d\n",b);
  printf("Imprimo el valor de '*ptr':\t%d\n",*ptr2);

/*
  void es un tipo de dato.
  Pero, no puedes declarar variables de tipo void.
    ¿Por qué? void representa que no hay un dato.
    No tiene sentido hacer una variable que guarde "nada".
    En funciones sí, porque puedes no retornar "nada".

  Pero sí puedes declarar un apuntador de tipo void*.
  Con un void* puedo apuntar a variables de cualquier tipo.
  A estos apuntadores se les llama también como apuntador genérico.
*/
//  void unVoid; <- No funciona, no existe
  void* ptrVoid;
  int x;
  float y;
  char z;
  ptrVoid = &x; //<- Apunta a un int
  ptrVoid = &y; //<- Apunta a un float
  ptrVoid = &z; //<- Apunta a un char
  
/*
  NULL = No existente. (En cualquier lugar, incluso fuera de C)
  NULL en C, está definido como un apuntador de tipo void*.
  Es el valor neutro para los apuntadores.
*/
  int* otro;
  otro = NULL;
  int* otroPtr = NULL;

  return 0;
}
