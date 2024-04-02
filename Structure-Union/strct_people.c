#include <stdio.h>
#include <math.h>
#include <string.h>

struct Person
{
    char name[50];
    char stats[15];
    int age;
    float height;
    float weight;
    float bmi;
};

int main()
{
    int population;
    char newName[50];

    printf("\nPopulation: ");
    scanf("%d", &population);
    getchar();

    struct Person people[population];

    for (int i = 0; i < population; i++)
    {
        printf("\nEnter details for person %d", i + 1);

        printf("\nName: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);
        people[i].name[strcspn(people[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("Height (in meters): ");
        scanf("%f", &people[i].height);

        printf("Weight (in kgs): ");
        scanf("%f", &people[i].weight);

        while (getchar() != '\n')
        {
            continue;
        }

        people[i].bmi = people[i].weight / pow(people[i].height, 2);

        if (people[i].bmi < 18.5)
        {
            strcpy(people[i].stats, "Under Weight");
        }
        else if (people[i].bmi > 18.5 && people[i].bmi < 24.9)
        {
            strcpy(people[i].stats, "Normal Weight");
        }
        else if (people[i].bmi > 25 && people[i].bmi < 29.9)
        {
            strcpy(people[i].stats, "Over Weight");
        }
        else if (people[i].bmi > 30 && people[i].bmi < 34.9)
        {
            strcpy(people[i].stats, "Class I Obesity");
        }
        else if (people[i].bmi > 35 && people[i].bmi < 39.9)
        {
            strcpy(people[i].stats, "Class II Obesity");
        }
        else if (people[i].bmi > 40)
        {
            strcpy(people[i].stats, "Extreme Obesity");
        }
    }

    printf("\n\n");

    printf("Know the statistics of a person.\n");
    printf("Enter their name: ");
    fgets(newName, sizeof(newName), stdin);
    newName[strcspn(newName, "\n")] = '\0';

    for (int i = 0; i < population; i++)
    {
        if (strcmpi(newName, people[i].name) == 0)
        {
            printf("Here are the person's stats:\n");
            printf("Age: %d\n", people[i].age);
            printf("BMI: %f\n", people[i].bmi);
            printf("Obese condition: %s\n\n", people[i].stats);
            break;
        }
        else
        {
            printf("'%s' person does not exist\n\n", newName);
        }
    }

    return 0;
}