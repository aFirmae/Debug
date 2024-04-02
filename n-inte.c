// 𝗡𝘂𝗺𝗲𝗿𝗶𝗰𝗮𝗹 𝗶𝗻𝘁𝗲𝗴𝗿𝗮𝘁𝗶𝗼𝗻:
// 𝗦𝗼𝗹𝘃𝗲 [𝟭,𝟰] ∫(𝘅² + 𝟭)𝗱𝘅 𝗯𝘆 𝘁𝗿𝗮𝗽𝗲𝘇𝗼𝗶𝗱𝗮𝗹 𝗿𝘂𝗹𝗲.

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (x * x + 1);
}

int main()
{
    int i, n;
    float a, b, h, x, sum = 0.0, integral;

    printf("Number of intervals: ");
    scanf("%d", &n);
    printf("Lower limit: ");
    scanf("%f", &a);
    printf("Upper limit: ");
    scanf("%f", &b);

    h = fabs((b - a) / n);

    for (i = 1; i < n; i++)
    {
        x = a + i * h;
        sum += f(x);
    }

    integral = (h / 2) * (f(a) + f(b) + 2 * sum);
    printf("Integration result: %f\n", integral);

    return 0;
}