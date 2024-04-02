//* Print 1 to 10 without using loops

#include <stdio.h>

int main()
{
    int num=1, limit=10;
    position:
    if(num<=limit)
    {
        printf("%d\n",num);
        num++;
        goto position;
    }
    else
    {
        return 0;;
    }
}