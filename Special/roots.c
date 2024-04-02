#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_BOLD "\x1b[3;1m"
#define ANSI_BOLD_GREEN "\x1b[1;32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
	double a, b, c, r1, r2, dis, real, img, arr[3], sum = 0.0, product = 0.0;
	int flag = 0;
	char choice;

	while (flag == 0 || choice == 'y' || choice == 'Y')
	{
		int ascii = 97;
		printf(ANSI_BOLD ANSI_COLOR_RED "Enter the coefficients (a, b, c) of the quadratic equation - a(x)^2 + bx + c = 0\n" ANSI_COLOR_RESET);

		for (int i = 0; i < 3; i++, ascii++)
		{
			printf(ANSI_BOLD "%c = " ANSI_COLOR_RESET, ascii);
			scanf("%lf", &arr[i]);
		}

		a = arr[0];
		b = arr[1];
		c = arr[2];

		sum = -b / a;
		product = c / a;

		if (sum == 0)
		{
			sum = fabs(sum);
		}

		dis = pow(b, 2) - (4 * a * c);
		printf("Discriminant: %s%.3f%s\n", ANSI_COLOR_MAGENTA, dis, ANSI_COLOR_RESET);

		if (dis == 0)
		{
			r1 = r2 = -b / (2 * a);
			printf(ANSI_COLOR_GREEN "The roots of the quadratic equation are equal and they are:\n" ANSI_COLOR_RESET);
			printf("Root1 = %s%lf%s\n", ANSI_COLOR_YELLOW, r1, ANSI_COLOR_RESET);
			printf("Root2 = %s%lf%s\n", ANSI_COLOR_YELLOW, r2, ANSI_COLOR_RESET);
		}
		else if (dis > 0)
		{
			r1 = (-b + sqrt(dis)) / (2 * a);
			r2 = (-b - sqrt(dis)) / (2 * a);
			printf(ANSI_COLOR_GREEN "The roots of the quadratic equation are:\n" ANSI_COLOR_RESET);
			printf("Root1 = %s%lf%s\n", ANSI_COLOR_YELLOW, r1, ANSI_COLOR_RESET);
			printf("Root2 = %s%lf%s\n", ANSI_COLOR_YELLOW, r2, ANSI_COLOR_RESET);
		}
		else
		{
			real = -b / (2 * a);
			img = sqrt(-dis) / (2 * a);
			if(real == 0)
			{
				real = fabs(real);
			}
			printf(ANSI_COLOR_GREEN "The roots of the quadratic equation are:\n" ANSI_COLOR_RESET);
			printf("Root1 = %s%.3f + %.3fi%s\n", ANSI_COLOR_YELLOW, real, img, ANSI_COLOR_RESET);
			printf("Root2 = %s%.3f - %.3fi%s\n", ANSI_COLOR_YELLOW, real, img, ANSI_COLOR_RESET);
		}

		printf("Sum of roots: %s%.3f%s\n", ANSI_COLOR_BLUE, sum, ANSI_COLOR_RESET);
		printf("Product of roots: %s%.3f%s\n", ANSI_COLOR_BLUE, product, ANSI_COLOR_RESET);

		printf("\n");
		printf(ANSI_BOLD_GREEN "Continue? (Y/N): " ANSI_COLOR_RESET);
		scanf(" %c", &choice);
		while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
		{
			printf(ANSI_BOLD "Enter either (Y/N): " ANSI_COLOR_RESET);
			scanf(" %c", &choice);
		}
		flag = 1;
	}
	return 0;
}
