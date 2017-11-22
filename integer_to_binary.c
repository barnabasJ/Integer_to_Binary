#include <stdio.h>

#define BITS 32
/*
 * Integers are normally 32 Bits
 */

int main() {
  int binary[BITS] = {0};
  /*
   * start from 0 and fill the array with the bits
   */
  int i = 0;
  int integer = 0;
  int originalnumber = 0;

  printf("This Program shows bits of a specified integer Number\n");
  printf("Enter integer number\n");
  scanf("%d", &integer);

  originalnumber = integer;

  while (integer > 0) {
    /*
     * The 0 or 1 can be directly saved into the array
     */
    binary[i] = integer % 2;
    integer /= 2;
    ++i;
  }

  printf("The binary representation of %d is:\n", originalnumber);
  /*
   * first decrement i because it's one higher then the last bit we safed into
   * the array
   */
  for (--i; i >= 0; --i) {
    printf("%d ", binary[i]);
  }

  return 0;
}
