#include "main.h"
/**
 * _strlen - string's length
 * @s: string(s) to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	return (count);
}
