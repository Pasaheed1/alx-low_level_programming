#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @i: checking parameter
 * Return: 1 (for uppercased) or 0 (for lowercased)
 */

int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
	return (1);
	}
	return (0);
}
