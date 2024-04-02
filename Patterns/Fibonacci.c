#include <stdio.h>
int main()
{
   int i, termNum, term1=0, term2=1, nextTerm;
   printf("\nEnter the number of terms: \n");
   scanf("%d", &termNum);
   printf("Fibonacci Series: \n");
   for(i=0; i<termNum; i++)
   {
      printf("%d", term1);
      //if statement for comma until last term
      if (i != termNum-1) 
      {
         printf(",");
      }
      nextTerm = term1 + term2;
      term1= term2;
      term2= nextTerm;
   }
   printf("\n\n");
   return 0;
}
