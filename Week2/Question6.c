#include <stdio.h>

int main() {
  int num = 2147483646;
  num += 1;
  printf("%d\n", num );
  num += 1;
  printf("%d", num);
  return 0;
}