#include <stdio.h>
#include <stdlib.h> // needed for srand and rand functions
#include <time.h>   // needed for time function
#include <string.h> // needed for string functions
#define b_cyan "\x1b[1;36m"
#define b_green "\x1b[1;32m"
#define b_uline "\x1b[1;4m"
#define end "\x1b[0m"

int main()
{
    int number, guessed_number, i = 1, flag = 0, score = 1010;
    char choice[3];

    printf("\n\t%s%sNumber Guessing Game%s\n", b_uline, b_cyan, end);
    printf("\t%s%s    Try Your Luck!  %s\n", b_uline, b_green, end);

    while (flag == 0 || strcasecmp(choice, "yes") == 0 || strcasecmp(choice, "Y") == 0)
    {
        srand(time(NULL));
        //number = rand() % 50 + 1;
        number = 10;

        printf("\nEnter a number (1 - 50): ");

        while (1)
        {
            scanf("%d", &guessed_number);

            if (guessed_number < 1 || guessed_number > 50)
            {
                printf("\nNumber needs to be between (1-50) :)\n Try Again: ");
                continue;
            }

            else if (guessed_number > number)
            {
                printf("\nWrong! Enter a smaller number: ");
            }

            else if (guessed_number < number)
            {
                printf("\nWrong! Enter a larger number: ");
            }
            else
            {
                printf("\n*******************************");
                printf("\nCongratulations! Correct guess.\n");
                printf("Tries: %d\n", i);
                if (i != 1)
                {
                    printf("Incorrect guess: %d\n", i - 1);
                }
                printf("Score: %d\n\n", score - i * 10);
                printf("*******************************\n");
                break; //only way to exit from the code
            }

            i++;
        }
        printf("\nPlay Again! (Yes/No)\n");
        scanf("%s", choice);
        flag = 1;
        score = 1010;
        i = 1;
        while (strcasecmp(choice, "Y") != 0 &&
               strcasecmp(choice, "N") != 0 &&
               strcasecmp(choice, "Yes") != 0 &&
               strcasecmp(choice, "No") != 0 &&
               strcasecmp(choice, "y") != 0 &&
               strcasecmp(choice, "n") != 0 &&
               strcasecmp(choice, "yes") != 0 &&
               strcasecmp(choice, "no") != 0)
        {
            printf("\nPlease enter either Yes or No: ");
            scanf("%s", choice);
        }
    }
    printf("\nThank You!\n");
    return 0;
}
