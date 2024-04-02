// 𝗦𝗼𝗹𝘃𝗲 𝗯𝘆 𝗚𝗮𝘂𝘀𝘀-𝗝𝗮𝗰𝗼𝗯𝗶 𝗺𝗲𝘁𝗵𝗼𝗱:
/*
    +𝟭𝟬𝘅𝟭 - 𝟮𝘅𝟮 - 𝘅𝟯 - 𝘅𝟰 = 𝟯
    -𝟯𝘅𝟭 + 𝟭𝟬𝘅𝟮 - 𝘅𝟯 - 𝘅𝟰 = 𝟭𝟱
    -𝘅𝟭 - 𝘅𝟮 + 𝟭𝟬𝘅𝟯 - 𝟮𝘅𝟰 = 𝟮𝟳
    -𝘅𝟭 - 𝘅𝟮 - 𝟮𝘅𝟯 + 𝟭𝟬𝘅𝟰 = -𝟵
*/

#include <stdio.h>
#include <math.h>

double max_ele(double arr[], int n)
{
    int i;
    double max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n, i, j;
    printf("Enter the number variables: ");
    scanf("%d", &n);
    int A[n][n];
    double B[n], x0[n], x[n], err[n], err_tol, sum, error_max;

    for (i = 0; i < n; i++)
    {
        x0[i] = 0.0;
    }

    printf("Enter LHS coefficients:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter RHS values:\n");
    for (i = 0; i < n; i++)
    {
        printf("B[%d] = ", i + 1);
        scanf("%lf", &B[i]);
    }

    printf("Enter error tolerance: ");
    scanf("%lf", &err_tol);

    do
    {
        for (i = 0; i < n; i++)
        {
            sum = 0.0;
            for (j = 0; j < n; j++)
            {
                if (j == i)
                {
                    continue;
                }
                sum += A[i][j] * x0[j];
            }
            x[i] = (B[i] - sum) / A[i][i];
            err[i] = fabs(x[i] - x0[i]);
            printf("x[%d] = %.6lf  ", i, x[i]);
        }
        
        for (i = 0; i < n ; i++)
        {
            x0[i] = x[i];
        }
        error_max = max_ele(err, n);
        printf(" Max error = %.6lf \n", error_max);
    } while (error_max >= err_tol);

    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %lf\n", i + 1, x[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0.0;
        for (j = 0; j < n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        sum = sum - B[i];
        printf("Check equation %d = %0.6lf \n", i + 1, sum);
    }
    return 0;
}

