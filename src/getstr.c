#include "getstr.h"

typedef void * (*alloc_t)(size_t);
typedef void (*dealloc_t)(void *);

void * __resize(alloc_t alloc, dealloc_t dealloc, void * ptr, size_t bytes_to_copy, size_t bytes_to_alloc)
{
  void * newptr = memmove(
        alloc(bytes_to_alloc),
        ptr,
        bytes_to_copy
      );
  dealloc(ptr);
  return newptr;
}


char * fgetstr(FILE * stream)
{
  size_t n = 1;
  char buffer, *str = (char *) malloc(sizeof(char));
  while((buffer = fgetc(stream)) != '\n' && !feof(stream))
  {
    str[n++ - 1] = buffer;
    str = (char *) __resize(malloc, free, str, n - 1, n);
  }

  str[n - 1] = '\0';

  return str;
}

char * getstr(void)
  {
    return fgetstr(stdin);
  }
