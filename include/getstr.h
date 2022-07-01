#ifndef GETSTR_H
#define GETSTR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Reads characters from a filestream until either a newline or EOF is reached.
 * Allocates a buffer for them, which has to be freed.
 */
char * fgetstr(FILE * stream);

/**
 * Reads characters from stdin until either a newline is read or EOF is reached.
 * Allocates a buffer for them, which has to be freed.
 */
char * getstr(void);

#endif//GETSTR_H

