// 𝗧𝗮𝗸𝗲 𝗱𝗲𝘁𝗮𝗶𝗹𝘀 𝗼𝗳 𝟱 𝘀𝘁𝘂𝗱𝗲𝗻𝘁𝘀 𝗮𝗻𝗱 𝗽𝗿𝗶𝗻𝘁 𝘁𝗵𝗲𝗶𝗿 𝗮𝘃𝗲𝗿𝗮𝗴𝗲 𝗺𝗮𝗿𝗸𝘀.

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    int roll;
    int std;
    char sec;
    float mark1;
    float mark2;
    float mark3;
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

        printf("Class: ");
        scanf("%d", &student[i].std);

        printf("Section: ");
        scanf(" %c", &student[i].sec);

        printf("Marks (Subject 1): ");
        scanf("%f", &student[i].mark1);

        printf("Marks (Subject 2): ");
        scanf("%f", &student[i].mark2);

        printf("Marks (Subject 3): ");
        scanf("%f", &student[i].mark3);

        while (getchar() != '\n')
        {
            continue;
        }
    }

label:
    printf("\nEnter Roll Number: ");
    scanf("%d", &newRoll);

    int found = 0;
    for (int i = 0; i < str; i++)
    {
        if (newRoll == student[i].roll)
        {
            printf("\nStudent details of Roll - %d \n", newRoll);
            printf("Name: %s\n", student[i].name);
            printf("Class: %d\n", student[i].std);
            printf("Section: %c\n", student[i].sec);
            printf("Marks (Subject 1): %.2f\n", student[i].mark1);
            printf("Marks (Subject 2): %.2f\n", student[i].mark2);
            printf("Marks (Subject 3): %.2f\n", student[i].mark3);
            printf("Average Marks: %.3f\n", (student[i].mark1 + student[i].mark2 + student[i].mark3) / 3);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student Roll %d does not exist\n", newRoll);
        goto label;
    }

    printf("\n");
    return 0;
}
