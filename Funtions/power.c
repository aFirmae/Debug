//Write a C program to find power of a number using for loop.

#include <stdio.h>
int power(int base, int exp)
{
   int i, multi=1;
   for(i=1; i<=exp; i++)
   {
   	multi*=base;		
   }
   return multi;
}
 
int main()
{
   int base, exponent, result;

   printf("Enter the base: ");
   scanf("%d", &base);
   printf("Enter the exponent: ");
   scanf("%d", &exponent);

   result = power(base, exponent);

   printf("%d to the power of %d is %d\n", base, exponent, result);

   return 0;
}
