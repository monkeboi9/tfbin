#include <stdio.h>
#include <stdlib.h>
#include "tobin.h"

void toBin(int input) {
  int bits;
  int start;
  int i;
  int remainder;
  int* digits;
  if (input < 256 && input > 0) {
    bits = 8;
  }
  else if (input >= 256) {
    bits = 16;
  }
  digits = malloc( sizeof( int ) * bits);
  for (int i = bits - 1; input > 0; i--) {
    remainder = input % 2;
    digits[i] = remainder;
    input /= 2;
  }
  
  for (i = 0; i < bits; i++) {
    if (digits[i] == 1) {
      start = i;
      break;
    }
  }
  for (i = start; i < bits; i++) {
    printf("%d", digits[i]);
  }
  printf("\n");
  free(digits);
} 
