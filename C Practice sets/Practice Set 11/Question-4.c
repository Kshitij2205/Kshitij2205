/* Create an array dynamically capable of storing 5 integers. 
   Now use realloc so that it can now store 10 integers. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ptr;

   ptr = (int*) malloc(5 * sizeof(int));
   ptr = (int*) realloc (ptr, 10 * sizeof(int)); 

    return 0;
}