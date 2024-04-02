#include <stdio.h>
int fibo(int t1, int t2, int n)
{
    if (n < 2)
    {
        return t1;
    }
    else
    {
        return fibo(t2, t1 + t2, n - 1);
    }
}
int main()
{
    int limit, term1 = 0, term2 = 1, count = 0;
    printf("Enter a limit: ");
    scanf("%d", &limit);
    printf("Fibonacci series upto %d terms is: ", limit);
    for (int i = 1; i <= limit; i++)
    {
        if (count > 0)
        {
            printf(", ");
        }
        printf("%d", fibo(term1, term2, i));
        count++;
    }
    printf("\n");
    return 0;
}