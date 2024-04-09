// 𝗕𝗶𝘀𝗲𝗰𝘁𝗶𝗼𝗻 𝗺𝗲𝘁𝗵𝗼𝗱 𝘁𝗼 𝘀𝗼𝗹𝘃𝗲 𝗮𝗹𝗴𝗲𝗯𝗿𝗮𝗶𝗰 𝗮𝗻𝗱 𝘁𝗿𝗮𝗻𝘀𝗲𝗻𝗱𝗲𝗻𝘁𝗮𝗹 𝗲𝗾𝘂𝗮𝘁𝗶𝗼𝗻𝘀.
// 𝗙𝗶𝗻𝗱 𝘁𝗵𝗲 𝗿𝗼𝗼𝘁 𝗼𝗳 𝘁𝗵𝗲 𝗲𝗾𝘂𝗮𝘁𝗶𝗼𝗻 = xe^(2x) - 3x^2 - 5 𝘂𝘀𝗶𝗻𝗴 𝗯𝗶𝘀𝗲𝗰𝘁𝗶𝗼𝗻 𝗺𝗲𝘁𝗵𝗼𝗱.⁡

#include <stdio.h>
#include <math.h>

#define e 2.718281828459045

float f(float x)
{
    return pow(x, 4) - x - 10;
}

int main()
{
    float a, b, c, err;
    int n = 0;

    printf("Enter the values of a, b and error tolerance.\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("Error tolerance = ");
    scanf("%f", &err);

    while (f(a) * f(b) > 0)
    {
        printf("Provide correct values of a and b\n");
        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);
    }
    while (n < 5 && (b - a) >= err)
    {
        c = (a + b) / 2;
        printf("n = %d, a = %f, b = %f, c = %f, f(c) = %f\n", n, a, b, c, f(c));
        if (f(c) == 0)
        {
            break;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        n++;
    }
    printf("The root of the equation is %.2f\n", c);
    return 0;
}

/*  1. Define f(x)
    2. Read the values of a, b and error tolerance
    3. if f(a).f(b)>> Error: Provide correct values of a and b
    4. else --> n = 0, while (ba >= err tol.)
       c = (a + b) / 2
       print(n, a, b, c, f(c))
    5. if f(c) Stop the Loop
    6. else if f(a).f(c) < 0
         b = c
       else a = c
         n = n + 1
       [END OF LOOP]
    7. print(c)
*/