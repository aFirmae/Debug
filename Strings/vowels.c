// Write a program in C to count the number of vowels in a string.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int count = 0;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	strlwr(str); // convert the string to lowercase

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			count++;
		}
	}

	printf("Number of vowels in the string: %d\n", count);

	return 0;
}
