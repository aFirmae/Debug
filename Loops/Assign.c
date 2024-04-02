#include <stdio.h>
int main()
{
	int stu_num, sub, roll, i, total, marks;
	printf("\nNumber of Students- ");
	scanf("%d", &stu_num);
	printf("Number of Subjects- ");
	scanf("%d", &sub);
	for (roll = 1; roll <= stu_num; roll++)
	{
		total = 0, i = 1;
		printf("\n\nROLL %d MARKS-\n", roll);
		while (i <= sub)
		{
			printf("Subject %d- ", i);
			scanf("%d", &marks);
			total += marks;
			i++;
		}
		printf("\nTotal marks- %d\n", total);

		float avg = (float)total / sub;

		if (avg >= 91 && avg <= 100)
			printf("Grade O");
		else if (avg >= 81 && avg <= 90)
			printf("Grade A");
		else if (avg >= 71 && avg <= 80)
			printf("Grade B");
		else if (avg >= 61 && avg <= 70)
			printf("Grade C");
		else if (avg >= 51 && avg <= 60)
			printf("Grade D");
		else
			printf("FAIL");
	}
}
