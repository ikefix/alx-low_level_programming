#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source string
 * @n: number of byte
 *
 * Return: Always Return char pointe
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
