#include <stdio.h>

int main ()
{
	int x = 0;
	printf("This program shows whether the inputed number is prime or not.\n");
	printf("Enter a number please\n");
	scanf("%d", &x);
	if (x / x == 1 && x / 1 == x)
	{
		printf("The number is prime\n");
	} else {
		printf("Non Prime number\n");
	}
}
