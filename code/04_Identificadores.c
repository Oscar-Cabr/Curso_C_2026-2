int main() {
  /*
   Reglas para crear un identificador
    1. Es único. No puede haber dos cosas (variables) con el mismo identificador.
  */
  int miVariable;
//  int miVariable;

  /*
   2. Uso de caracteres válidos:
    - Letras (mayus y minus) del alfabeto inglés.
    - Digitos del sistema decimal.
    - Guión bajo.
  */
  int año; // <- Igual ya es válido.
  int Á, ü;
  int miVariable1, miVariable2; // Declarar varias variables en una misma línea.
  // int miVariable1;
  // int miVariable2;
  int a12h182h13ghas;
  int mi_variable, variable_enter_a;

  /*
   3. Deben empezar por una letra.
  */
//  int 0avar;
  int _var; // <- Es mala práctica.
  
  /*
   4. Es sensible a mayúsculas y minúsculas.
  */
  int manchas, Manchas, manchaS, mAnChAs;

  return 0;
}
