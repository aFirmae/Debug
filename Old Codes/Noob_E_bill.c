/* An electricity board charges the following rates for the use of electricity: 
for the first 200 units 80 paise per unit: 
for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. 
All users are charged a minimum of Rs. 100 as meter charge. 
If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged. 
Write a program to read the name of the user, number of units consumed and print out the charges */

#include <stdio.h>
int main()
{
    float unit, money;
    char name[50];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter unit consumed: ");
    scanf("%f", &unit);
    for (int i = 1; i <= unit; i++) 
    {
        if (unit <= 200) 
        {
            money += 0.8;
        } 
        else if (unit <= 300) 
        {
            money += 0.9;
        } 
        else if (unit > 300) 
        {
            money += 1;
        }
        else if (money > 400) 
        {
            money += (0.15 * money);
        }
    }
    printf("Name: %s\nUnit: %.2f\nCharge: %.2f", name, unit, money+100);
    return 0;
}
