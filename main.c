#include "getstr.h"

int main() {
  puts("Write something:");
  char * mytext = getstr();
  
  printf("\n%s\n", mytext);

  free(mytext);

  return 0;
}

