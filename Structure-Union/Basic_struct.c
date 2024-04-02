// WAP in C to store and print information about three students using structures.
#include <stdio.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float percentage;
};

int main() 
{
	int i;
    struct Student students[3];

    // Input student information
    for (i = 0; i < 3; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Percentage: ");
        scanf("%f", &students[i].percentage);

        // Clear the input buffer
        while (getchar() != '\n')
        continue;

        printf("\n");
    }

    // Print student information
    printf("Student Information:\n");
    for (i = 0; i < 3; i++) 
	{
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("\n");
    }

    return 0;
}