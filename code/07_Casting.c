int main() {
  int a = 10;
  float b = 1.5;

  int x = a * b;
  float y = a * b;

  // float b
  double c = 0.0;
  long double d = 1.98;
  b = c * d;
/*
  float       = 0.0
  double      = 0.00
  long double = 0.000
*/

//  long double -> long
//  0.009 -> 0

  // hex  0x<...> -> short, int, long
  a = 0xB; // 11 -> 1011
  a = 11;

  return 0;
}
