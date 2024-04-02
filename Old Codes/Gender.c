#include<stdio.h>
#include<string.h>
int main()
{
    int flag=1, tries=1;
    char ch, name[40];
    printf("\nEnter your name- ");
    scanf("%[^\n]%*c",name);
    printf("\nEnter gender(M/F): ");
    scanf(" %c",&ch);
    do
    {
        switch (ch)
        {
            case 'M':
            case 'm':
                printf("\nHello Mr. %s\n\n",name);
                flag=1;
                break;
            case 'F':
            case 'f':
                printf("\nHello Miss. %s\n\n",name);
                flag=1;
                break;
            default:  
                while(flag)
                {
                    if(tries<5)
                    {
                        printf("\nPlease enter either (M/F)! Try Again!\n");
                        scanf("%c", &ch);

                        //! Code has its errors, it just checks the first character( if it's a string input) to see if its 'M,m,F,f' or not.
                        //? Also it prints the printf string several times quite often.
                        //* But nonetheless, my first attempt to failsafe the incorrect inputs.

                        if(ch !='M' && ch!='m' && ch!='F' && ch!='f')
                        { 
                            tries++;
                            while(getchar()!='\n')
                            continue;
                        }
                        else
                        {
                            flag=0;
                            break;
                        }               
                    }
                    else
                    {
                        printf("\n5 unsuccessful tries, You illiterate indivisual.\n\n");
                        break;
                    }
                }          
        }
    }
    while(!flag);
    return 0;
}   