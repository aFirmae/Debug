#include <stdio.h>
#include <limits.h>
#define b_green "\x1b[1;32m"
#define end     "\x1b[0m"

int main()
{
    int stu_num, sub, roll, i, total, marks;
    int first = 0, second = 0, third = 0;
    int max_total1 = INT_MIN, max_total2 = INT_MIN, max_total3 = INT_MIN;
    
    printf("\t%sStudents' Ranks%s", b_green, end);
    printf("\nNumber of Students- ");
    if(scanf("%d",&stu_num) != 1)
    {
        printf("\tThat's not a number.\n");
        return 0;
    }
    
    printf("Number of Subjects- ");
    if(scanf("%d",&sub) != 1)
    {
        printf("\tThat's not a number.\n");
        return 0;
    }
    
    for(roll=1; roll<=stu_num; roll++)
    {
        total=0, i=1;
        printf("\n\nROLL %d MARKS-\n", roll);
        
        while(i <= sub)
        {
            printf("Subject %d- ", i);
            scanf("%d", &marks);
            total += marks;
            i++;
        }
        printf("\nTotal marks- %d/%d\n", total, sub*100);

        float avg =(float) total / sub;

        if(avg >= 91 && avg <= 100)
            printf("\tGrade O");
        else if(avg >= 81 && avg <= 90)
            printf("\tGrade A");
        else if(avg >= 71 && avg <= 80)
            printf("\tGrade B");
        else if(avg >= 61 && avg <= 70)
            printf("\tGrade C");
        else if(avg >= 51 && avg <= 60)
            printf("\tGrade D");
        else
            printf("\tFAIL");
        
        if(stu_num > 3)
        {
            //* Check for top three students
            //? Doesn't work for tied scores...

            if (total >= max_total1) 
            {
                third = second;
                max_total3 = max_total2;
                second = first;
                max_total2 = max_total1;
                first = roll;
                max_total1 = total;
            } 
            else if (total >= max_total2) 
            {
                third = second;
                max_total3 = max_total2;
                second = roll;
                max_total2 = total;
            } 
            else if (total >= max_total3) 
            {
                third = roll;
                max_total3 = total;
            }
        }
    }
    if(stu_num > 3)
    {
        //* Print the top three students
        printf("\n\nCongratulations to the following students:\n");
        printf("\t1st place: Roll %d with a score of %d", first, max_total1);
        printf("\t2nd place: Roll %d with a score of %d", second, max_total2);
        printf("\t3rd place: Roll %d with a score of %d\n\n", third, max_total3);
    }
    return 0;
}
