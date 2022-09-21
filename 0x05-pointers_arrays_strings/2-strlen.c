#include "stdio.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int main() 
{
	char s[] = "Programming is fun";
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	printf("Length of the string: %d", i);
	return 0;
}
