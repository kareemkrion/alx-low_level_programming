#include "main.h"

/**
 * _strlen_recursion - returning thye length of a string
 * @s: string to be measured
 *
 * Return: legth of the string
 */
int _strlen_recursion(char *s)
{
	int lth = 0;

	if (*s)
	{
		lth++;
		lth += _strlen_recursion(s + 1);
	}
}
