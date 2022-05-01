#ifndef  GETSTR_H
#define  GETSTR_H

#include <stdio.h>
#include <stdlib.h>

#ifndef __linux__
  #include <conio.h>
#endif

/**
 * Reads characters from stdin and allocates a buffer for them
 */
char * getstr(void);

#endif// GETSTR_H

