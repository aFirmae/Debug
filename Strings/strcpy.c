// Write a program in C to copy one string to another.
#include <stdio.h>
#include <string.h>

int main()
{
	char src[50], dest[50];

	printf("Enter a string to copy: ");
	fgets(src, 50, stdin);
	stc[strcspn(stc, "\n")] = '\0';

	strcpy(dest, src);

	printf("Copied string is: %s\n", dest);

	return 0;
}
