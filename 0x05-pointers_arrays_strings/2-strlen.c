#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lth;

	while (*s != '\0')
	{
		lth++;
		s++;
	}
	return (lth);
}
