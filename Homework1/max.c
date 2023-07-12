#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	printf("This program calculates which number is larger from the given two\n");
	printf("Enter the first number please: ");
	scanf("%d", &x);
	printf("Enter the second number please: ");
	scanf("%d", &y);
	if (x > y) {
		printf("The max is the 1st number - %d ", x);
	} else {
		printf("The max is the 2nd number - %d ", y);
	}

}
