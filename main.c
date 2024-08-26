#include <stdlib.h>
#include <string.h>
#include "frombin.h"
#include "tobin.h"

int main(int argc, char *argv[]) {
  long long input;
  input = atoll(argv[2]);
  if (strcmp(argv[1],"to")==0) {
    int int_input = (int) input;
    toBin(int_input);
  }
  else if (strcmp(argv[1],"from")==0) {
    fromBin(input);
  }
}
