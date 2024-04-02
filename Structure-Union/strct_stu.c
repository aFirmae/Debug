#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    int roll;
    float marks;
} Student;

int main()
{
    int str, newRoll;
    printf("Student strength: ");
    scanf("%d", &str);
    getchar();

    Student student[str];

    for (int i = 0; i < str; i++)
    {
        printf("\nStudent %d - \n", i + 1);

        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strlen(student[i].name) - 1] = '\0';

        printf("Roll Number: ");
        scanf("%d", &student[i].roll);

        printf("Marks: ");
        scanf("%f", &student[i].marks);

        while (getchar() != '\n')
        {
            continue;
        }
    }

    label:
    printf("\nEnter Roll Number: ");
    scanf("%d", &newRoll);

    for (int i = 0; i < str; i++)
    {
        if (newRoll == student[i].roll)
        {
            printf("\nStudent details of Roll - %d \n", newRoll);
            printf("Name: %s\n", student[i].name);
            printf("Marks: %f\n", student[i].marks);
            break;
        }
        else
        {
            printf("Student Roll %d do not exist\n", newRoll);
            goto label;
        }
    }
    printf("\n");
    return 0;
}