#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("This program calculates the max value from 3 numbers and prints it if the other two are equal.\n");
	printf("The first number is \n");
	scanf("%d", &x);
	printf("The second number is \n");
	scanf("%d", &y);
	printf("The third number is \n");
	scanf("%d", &z);
	if (x != y && y != z && x != z || x == y && y == z)
	{
		return 0;
	} else if (x == y && z > x) {
		printf ("The max is %d ", z);
	} else if (x == z && y > x) {
		printf("The max is %d ", y);
	} else if (y == z && x > y) {
		printf("The max is %d ", x);
	}


}
