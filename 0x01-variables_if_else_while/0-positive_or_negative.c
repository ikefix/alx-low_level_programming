#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is zero, positive or negative
 *
 * Description:using the main function
 * this program prints "programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES HERE */
	if (n > 0)
	{
		printtf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
