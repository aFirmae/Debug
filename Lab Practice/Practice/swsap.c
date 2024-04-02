#include<stdio.h>
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1, num2;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf(" Before swapping: %d %d\n", num1, num2);
    swap(&num1, &num2);
    printf(" After swapping: %d %d\n", num1, num2);
    printf("\n");
    return 0;
}