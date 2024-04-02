// 𝗡𝗲𝘄𝘁𝗼𝗻-𝗥𝗮𝗽𝗵𝘀𝗼𝗻 𝗠𝗲𝘁𝗵𝗼𝗱
3
/*
Algorithm:
1. Define f(x) as f
2. Define f'(x) as df
3. Read input for initial approximation x₀
4. Read input for error tolerance
5. Define n = 0
6. Define err = |f(x₀)|
7. while -> err ≥ err_tol
8.         Define h = - f(x₀)/df(x₀)
9.         Define x = x₀ + h
10.        Print the value of n, f(x₀), df(x₀), x, f(x)
11.        err = |f(x)|
12.        x₀ = x
13.        n++
   [END OF LOOP]
14. Print x which is the root of the equation.
*/

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (x * x * x - 8 * x - 4.0);
}

float df(float x)
{
    return (3 * (x * x) - 8);
}

int main()
{
    float x₀, err, err_tol, h, x;
    int n = 0;
    printf("Enter the values of x and error tolerance.\n");
    printf("x₀ = ");
    scanf("%f", &x₀);
    printf("Error tolerance = ");
    scanf("%f", &err_tol);

    err = fabs(f(x₀));

    while (err >= err_tol)
    {
        h = - (f(x₀) / df(x₀));
        x = x₀ + h;
        printf("n = %d, f(x₀) = %f, df(x₀) = %f, x = %f, f(x) = %f\n", n, f(x₀), df(x₀), x, f(x));
        err = fabs(f(x));
        x₀ = x;
        n++;
    }

    printf("The root of the equation is %f\n", x);

    return 0;
}
