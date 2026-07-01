int main() {
  int x, y;

/*
 Tipos de operadores:
  Aritmeticos: +, -, *, /, %
  Incremento: ++, --
  Asignación: =, +=, -=, *=, ...
  Relacionales: ==, !=, >, <, >=, <=
  Lógicos: &&, ||, !
  Bitwise: &, |, ^, -, <<. >>
*/

  x = 5;
  y = 3;

  int z = x + y; // 8
  x = x - y; // 2
  y = z * x * y; // 48
  z = 5;
  x = y / z; // 9 <- La división es división entera (Trunca siempre)
  x = y % z; // 3
  // 48 / 5 = 9.6 -> 9 * 5 = 45, 48 - 45 = 3
/*
  Operación módulo: %
  En literatura: a MOD b
  El resultado del módulo es el residuo del cociente a / b
*/

  int a = 0;
  a++; // a <- 1
  a++; // a <- 2
  // ...
// a++ <=> a = a + 1;
// a-- <=> a = a - 1;
  a += 5; // a <- 7
// a += n <=> a = a + n;
  a /= 2; // a <- 3
// a /= n <=> a = a / n;
  // +=, -=, *=, /=, %=

/*
 Operadores de agrupación
 ( )
 Modifican la jerarquía de operación.
 Jerarquía de operación:
  1. Incrementos (a++, a--)
  2. Unarios (+,-)
  3. Multiplicativos (*,/,%)
  4. Aditivos (+,-)
  5. Asignación (=, +=, -=,...)
*/
  a += (x + y) * z;
  a = a + ( (x + y) * z );

  return 0;
}
// Scope
