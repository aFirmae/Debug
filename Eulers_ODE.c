// 𝗡𝘂𝗺𝗲𝗿𝗶𝗰𝗮𝗹 𝘀𝗼𝗹𝘂𝘁𝗶𝗼𝗻 𝗼𝗳 𝗢𝗗𝗘 𝗯𝘆 𝗘𝘂𝗹𝗲𝗿'𝘀 𝗺𝗲𝘁𝗵𝗼𝗱
// 𝗙𝗶𝗻𝗱 𝘁𝗵𝗲 𝘃𝗮𝗹𝘂𝗲 𝗼𝗳 𝘆(𝟬.𝟬𝟮) 𝗳𝗿𝗼𝗺 𝘁𝗵𝗲 𝗜𝗩𝗣 𝗱𝘆/𝗱𝘅= 𝘅^𝟯+𝘆, 𝘄𝗶𝘁𝗵 𝘆(𝟬)= 𝟭 𝘂𝘀𝗶𝗻𝗴 𝗘𝘂𝗹𝗲𝗿'𝘀 𝗺𝗲𝘁𝗵𝗼𝗱 𝘄𝗵𝗲𝗻 𝗵= 𝟬.𝟬𝟭 

#include <stdio.h>
#include <math.h>

#define e 2.71828

float f(float x, float y)
{
    return pow(x, 3) + y;
}
int main()
{
    float x0, y0, x, y, h, xn, k;
    printf("Enter the initial values of x and y: ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the step length: ");
    scanf("%f", &h);
    printf("Enter the value of x for which y is required: ");
    scanf("%f", &xn);
    x = x0;
    y = y0;
    printf("\n x \t\t y \n");

    while (x + h <= xn)
    {
        printf("%f \t %f \n", x, y);
        k = h * f(x, y);
        x = x + h;
        y = y + k;
    }

    printf("The value of y at x = %f is %f\n", xn, y);

    return 0;
}