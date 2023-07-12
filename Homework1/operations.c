#include <stdio.h>

int main()
{	
	int x = 0;
	int y = 0;
	printf("This program calculates given expression.\n");
	printf("Enter please the first variable\n");
	scanf("%d", &x);
	printf("Enter please the second variable\n");
	scanf("%d", &y);
	if (y != 0) {

		printf("The result is %d \n", x * y + 21 * x / y - 200);

	} else {

		printf("Invalid operation, as the number can not be divided by 0\n");

	}

}
