#include <stdio.h>

#define SAY(y) y

void main()
{      
      int i = 0;
      char say[] = {73, 32, 108, 111, 118, 101, 32, 102, 105, 115, 104, 99, 46, 99, 111, 109, 33, 0};

      while( say[i] )
      {
            say[i] = SAY(say[i]*1+1-1);
            i++;
      }

 
      printf("\n\t%s\n\n", say);
      
      
}

