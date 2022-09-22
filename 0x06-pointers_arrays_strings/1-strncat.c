#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination
 * @src: pointer to source string
 * @n: number of byte
 *
 * Return: Always Return char pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;i
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';	
	return (dest)
}	
