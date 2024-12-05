#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // safer way to modify the value of x using a pointer
  *ptr = 20; 

  printf("Value of x: %d\n", x);
  return 0;
}
