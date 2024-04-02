#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c, double *root1, double *root2);

int main()
{
    double b_arr[3];
    char coeffs[3] = {'a', 'b', 'c'};
    double a, b, c, root1, root2;

    printf("Enter coefficients a, b, and c: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c = ", coeffs[i]);
        scanf("%lf", &b_arr[i]);
    }
    a = b_arr[0];
    b = b_arr[1];
    c = b_arr[2];

    if (((b * b) - (4 * a * c)) >= 0)
    {
        findRoots(a, b, c, &root1, &root2);

        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);

        printf("Sum of roots: %lf\n", -b / a);
        printf("Product of roots: %lf\n", c / a);
    }

    return 0;
}

void findRoots(double a, double b, double c, double *root1, double *root2)
{
    double discriminant;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        *root1 = *root2 = -b / (2 * a);
    }
    else
    {
        double real = -b / (2 * a);
        double img = sqrt(-discriminant) / (2 * a);
        printf("Root1= %.3lf+%.3lfi\n", real, img);
        printf("Root2= %.3lf-%.3lfi\n", real, img);

        printf("Sum of roots: %lf\n", -b / a);
    printf("Product of roots: %lf\n", c / a);
    }
}
