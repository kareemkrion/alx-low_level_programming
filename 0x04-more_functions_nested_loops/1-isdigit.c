#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: variable text
 * Return: Always 0
 */
int _isdigit(int c)
{
	int b = 1;

	if (c >= '0' && c <= '9')
		b = 1;

	return (b);
}
