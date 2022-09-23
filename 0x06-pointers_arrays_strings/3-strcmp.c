#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: pointer to destination
 * @s2: pointer to source string
 *
 * Return: Always Return char pointer
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0, result;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			result = s1[count] - s2[count];
			break;
		}
		else
		{
			result = s1[count] - s2[count];
		}
		count++;
	}
	return (result);
}
