#include <stdio.h>
int main() {
  double num = 5.2;
  int var = 5;
  printf("%d\t", sizeof(!num));
  printf("%d\t", sizeof(var = 15/2));
  printf("%d", var);
  return 0;
}