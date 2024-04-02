#include <stdio.h>
#include <string.h>
#include <math.h>
#define b_uline "\x1b[1;4m"
#define end     "\x1b[0m"
int main()
{
    int valid,value;
    float a, b;
    char tempo[7], choice[3], trig;
    printf("\n       %sBasic Trignometric Calculator.%s\n", b_uline, end);
    do
    {
        valid = 1;
        printf("\nEnter your angle: ");
        value=scanf("%f", &a);
        if (value == 1)
        {
            printf("Is your angle is degree or radian? (Enter Degrees or Radians)\n");
            scanf("%s", tempo);
        }
        if (value==1 && strcasecmp(tempo, "Degree") == 0 || strcasecmp(tempo, "Degrees") == 0 || strcasecmp(tempo, "D") == 0 || strcasecmp(tempo, "Deg") == 0)
        {
            b = a * (M_PI / 180);
        }
        else if (value==1 && strcasecmp(tempo, "Radian") == 0 || strcasecmp(tempo, "Radians") == 0 || strcasecmp(tempo, "R") == 0 ||strcasecmp(tempo, "Rad") == 0)
        {
            b = a;
        }
        else
        {
            printf("You have entered something Invalid.\n");
            valid = 0;
        }
        if (valid != 0)
        {
            printf("What trignometric function would you like to use?\n"
                   "(Enter the number assigned to the trigonometric ratios.)\n"
                   "1. Sine.\n"
                   "2. Cosine.\n"
                   "3. Tangent.\n"
                   "4. Cotangent.\n"
                   "5. Secant.\n"
                   "6. Cosecant.\n");
            scanf(" %c", &trig);
            switch (trig)
            {
                case '1':
                    printf("sin %.3f= %.4f", a, sin(b));
                    break;
                case '2':
                    printf("cos %.3f= %.4f", a, cos(b));
                    break;
                case '3':
                    printf("tan %.3f= %.4f", a, tan(b));
                    break;
                case '4':
                    printf("cot %.3f= %.4f", a, 1 / (tan(b)));
                    break;
                case '5':
                    printf("sec %.3f= %.4f", a, 1 / (cos(b)));
                    break;
                case '6':
                    printf("cosec %.3f= %.4f", a, 1 / (sin(b)));
                    break;
                default:
                    printf("Invalid trigonometric ratio.\nEnter a number between 1-6\n");
            }
        }
        printf("\nDo you want to perform another calculation? (Enter 'Yes' or 'No'): \n");
        scanf(" %s", choice);
        while (strcasecmp(choice, "Y") != 0 && strcasecmp(choice, "N") != 0 && strcasecmp(choice, "Yes") != 0 && strcasecmp(choice, "No") != 0)
        {
            printf("Please enter 'Yes' or 'No' to either continue or end the calculation.\n");
            scanf(" %s", choice);
        }
    } 
    while (strcasecmp(choice, "Yes") == 0 || strcasecmp(choice, "Y") == 0);
    printf("\n  ^-^ Thank you for using Basic Trignometric Calculator! ^-^\n\n");
    return 0;
}
