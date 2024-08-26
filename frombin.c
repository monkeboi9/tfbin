#include <stdio.h>
#include <stdlib.h>
#include "frombin.h"

void fromBin(long long input) {
  int* arrInput;
  int out;
  int count = 0;
  long long binary = input;
  long long n = input;
  if (n == 0) {
    count = 1;
  }
  else {
    while (n != 0) {
      count++;
      n /= 10;
    }
  }
  arrInput = malloc( sizeof ( int ) * count);
  for (int i = count - 1; i >= 0; i--) {
    arrInput[i] = binary % 10;
    binary /= 10;
  }
  out = (arrInput[0] * 2) + arrInput[1];
  for (int i = 2; i < count; i++) {
    out *= 2;
    out += arrInput[i];
  }
  if (input == 1) {
    out = 1;
  }
  printf("%d\n", out);
  free(arrInput); 
}
