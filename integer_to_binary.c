#include <stdio.h>

int main() {
  int binary[16] = {0};
  int printloop;
  int i = 15;
  int integer = 0;
  int originalnumber = 0;

  printf("This Program shows up to 16 bits of a specified integer Number\n");
  printf("Enter integer number\n");
  scanf("%d", &integer);

  originalnumber = originalnumber + integer;

  while (integer > 0) {
    if (integer % 2 != 0)
      binary[i] = 1;

    i--;
    integer = integer / 2;
  }

  printf("The binary representation of %d is:\n", originalnumber);
  for (printloop = 0; printloop < 16; printloop++)
    printf("%d ", binary[printloop]);

  return (0);
}
