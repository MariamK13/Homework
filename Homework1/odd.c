#include <stdio.h>

int main ()
{
	int x = 0;
	printf("This program shows if the inputed number is even or odd.\n");
	printf("Enter a number please: \n");
	scanf("%d", &x);
	if (x % 2 != 0)
	{
		printf("The number is odd\n");
	} else {
		printf("The number is even\n");
	}
}
