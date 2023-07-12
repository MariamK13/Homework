#include <stdio.h>

int main()
{
	char sym = 'a';
	printf("This program converts an uppercase char to lowercase.\n");
	do {
	printf("enter an uppercase character please\n");
	scanf(" %c", &sym);
        if (sym > 64 && sym < 91) {
		printf("The lowercase is %c \n", sym + 32);
	} else {
		printf("This is not an uppercase.\n");
	}
	++sym;
	} while (sym > 64 && sym < 91); 

}
