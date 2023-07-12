#include <stdio.h>

int main()
{
	char sym = 'a';
	printf("This program shows whether a char is vowel or consonant.\n");
	do {
	printf("enter a char please\n");
	scanf(" %c", &sym);
	if (sym == 'a' || sym == 'A' || sym == 'e' || sym == 'E' || sym == 'i' || sym == 'I' || sym == 'u' ||  sym == 'U' || sym == 'o' || sym == 'O') {
		printf("It's a vowel.\n");
	    } else if (sym > 64 && sym < 91 || sym > 96 && sym < 123) {
		printf("It's a consonant.\n");
	    } else {
		    printf("It's not a char from Latin alphabet.\n");
	    }
	++sym;
	} while (sym > 64 && sym < 91 || sym > 96 && sym < 123);
}
