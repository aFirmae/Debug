/*Write a program in C to take a student's  marks on 5 subjects, and display these grades based on their average marks:
    100-91 => Grade O
     90-81 => Grade A
     80-71 => Grade B
     70-61 => Grade C
     60-51 => Grade D
    Otherwise FAIL */

#include<stdio.h>
int main() {
    int marks,sum = 0;
    float average;

    printf("Enter the marks of 5 subjects: \n");

    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &marks);
        sum += marks;
    }

    average = sum / 5.0;

    if(average >= 91 && average <= 100)
        printf("Grade O");
    else if(average >= 81 && average <= 90)
        printf("Grade A");
    else if(average >= 71 && average <= 80)
        printf("Grade B");
    else if(average >= 61 && average <= 70)
        printf("Grade C");
    else if(average >= 51 && average <= 60)
        printf("Grade D");
    else
        printf("FAIL");

    return 0;
}
