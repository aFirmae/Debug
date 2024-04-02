#include<stdio.h>
int main()
{
    float num;
    printf("Enter temp: ");
    scanf("%f", &num);
   //float F = 1.8 * num + 32;
    float C =(((num - 32.0) *5)/9); 
    printf("%f\n", C);
    return 0;
}