#include "main.h"

/**
 * _isupper- check if letter is uppercase
 * @c: checking parameter
 * Return: 1 (for uppercased) or 0 (for lowercased)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
