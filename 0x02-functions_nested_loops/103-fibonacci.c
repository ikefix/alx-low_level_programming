#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum = 0;
	int tmp;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;


		tmp = j;
		j += i;
		i = tmp;
	}
	printf("%d\n", sum);
	return (0);
}


