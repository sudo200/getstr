#include "getstr.h"

char * getstr(void)
  {
    char *str = (char *)malloc(sizeof(char)),
	 temp = 0;
    size_t i = 0;

    while(1)
      {
	#ifndef __linux__
        temp = getch();
	#else
        temp = (char)getchar();
	#endif

	if(temp == '\n' || temp == '\r')
	  break;

	if(temp == '\b')
	  {
	    printf("\b \b");
	    --i;
	  }
	else
	  {
	    #ifndef __linux__
	    putchar(temp);
            #endif

	    str[i] = temp;
	    ++i;
	  }
	  
	str = (char *)realloc(str, i * sizeof(char));
      }
    
    str[i] = 0;
    putchar('\n');
    fflush(stdin);
    return str;
  }
