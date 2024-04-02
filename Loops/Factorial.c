//Write a program in C to find the factorial of a number.
#include <stdio.h>
int main()
{
   int i, num, factorial=1;
   printf("Enter a number: ");
   scanf("%d", &num);
   if(num>=0)
   {
        for(i=num; i>0; i--)
        {
         factorial*=i;
        }
        printf("Factorial of %d is: %d\n", num, factorial);
   }
   else
        printf("Factorial of a negative number doesn't exist.");
   return 0;
}
