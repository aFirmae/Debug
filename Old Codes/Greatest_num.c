//Write a program in C to find the greatest among 3 integers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Input 3 integers- \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    printf("%d is the greatest among %d, %d and %d.", a, a ,b, c);
    else if(b>a && b>c)
    printf("%d is the greatest among %d, %d and %d.", b, a ,b, c);
    else
    printf("%d is the greatest among %d, %d and %d.", c, a ,b, c);
    return 0;
}
