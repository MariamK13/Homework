#include <stdio.h>

int main()
{
	char sym = 'a';
	printf("This program shows if the inputed character is a digit or not.\n");
	do {
	printf("enter a digit please\n");
	scanf(" %c", &sym);
	if (sym > 47 && sym < 58) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	++sym;
	} while (sym > 47 && sym < 58);


}
