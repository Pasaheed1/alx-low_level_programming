#include "main.h"

/**
 * _abs - main functiob
 * @a: checking parameter
 * Return: 0 or 1
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
		return (a);
	return (0);
}
