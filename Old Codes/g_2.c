//Write a program in C to find the greatest among 2 integers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Input 2 integers- \n");
    scanf("%d %d", &a, &b);
    if(a>b)
    printf("%d is the greatest among %d and %d.", a, a ,b);
    else
    printf("%d is the greatest among %d and %d.", b, a ,b);
    return 0;
}
