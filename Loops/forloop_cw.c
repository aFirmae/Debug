#include <stdio.h>
int main()
{
   int i, j;
   printf("\n");
   for(i=0,j=1; j; printf(" %d %d", i ,j))
   {
      j=((++i)<=5);
   }
   printf("\n\n");
}
