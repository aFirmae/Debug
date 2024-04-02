// 𝗙𝗶𝗻𝗱 𝘁𝗵𝗲 𝗶𝗻𝘁𝗲𝗴𝗿𝗮𝗹 𝗼𝗳 𝘁𝗵𝗲 𝗳𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝘅^𝟮 + 𝘅 + 𝟭 𝘂𝘀𝗶𝗻𝗴 𝗦𝗶𝗺𝗽𝘀𝗼𝗻'𝘀 𝟭/𝟯𝗿𝗱 𝗿𝘂𝗹𝗲 𝗼𝗻 𝘁𝗵𝗲 𝗶𝗻𝘁𝗲𝗿𝘃𝗮𝗹𝘀 [𝟬, 𝟭]

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (pow(x, 2) + x + 1);
}

int main()
{
    int i, n;
    float a, b, h, x, sum, integral;

    printf("Lower limit: ");
    scanf("%f", &a);
    printf("Upper limit: ");
    scanf("%f", &b);

    printf("Enter number of sub-intervals: n = ");
    scanf("%d", &n);

    while (n % 2 != 0)
    {
        printf("Number of sub-intervals can't be odd!\n");
        printf("Try again!\nn = ");
        scanf("%d", &n);
    }

    sum = f(a) + f(b);

    h = (b - a) / n;

    for (i = 1; i < n; i++)
    {
        x = a + i * h;
        if (i % 2 != 0)
        {
            sum += 4 * f(x);
        }
        else
        {
            sum += 2 * f(x);
        }
    }

    integral = (h / 3) * sum;
    printf("Integration result: %f\n", integral);

    return 0;
}