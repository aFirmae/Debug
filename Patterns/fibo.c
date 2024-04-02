/*The numbers in the sequence
1 1 2 3 5 8 13 21 …………………… are called Fibonacci numbers.
Write a program using do while loop to calculate and print the first m Fibonacci numbers. */

#include <stdio.h>
int main()
{
	int t1 = 0, t2 = 1, nt, term;
	printf("Number of terms?- ");
	scanf("%d", &term);
	printf("Fibonacci Series- ");
	do
	{
		printf("%d", t1);
		if (term - 1)
		{
			printf(",");
		}
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		term--;
	} while (term);
	return 0;
}
