#include "main.h"

/**
 * create_array - array for print a string
 * @s: number element array
 * @c: char
 * return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (null);
	}
	buffer == (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (null);
	}
	else
	{
		position = 0;
	
	while (positiom < size)
	{
		*(buffer + position) = c;
		position ++;
	}
	return (buffer);
}
