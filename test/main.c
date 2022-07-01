#include "getstr.h"

int main() {
  puts("Write something:");
  char * mytext = getstr();
  
  printf("\n%s\n", mytext);

  free(mytext);

  FILE * file0 = fopen("./test/file0.txt", "r");
  FILE * file1 = fopen("./test/file1.txt", "r");

  if(file0)
  {
    char * myfile0text = fgetstr(file0);
    printf("\n%s\n", myfile0text);
    free(myfile0text);
    fclose(file0);
  }

  if(file1)
  {
    char * myfile1text = fgetstr(file1);
    printf("\n%s\n", myfile1text);
    free(myfile1text);
    fclose(file1);
  }

  return 0;
}

