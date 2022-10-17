#include <stdio.h>

/**
 * main - prints out single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 57; num++)
		putchar((num % 57) + '48');
	putchar('\n');

	return (0);
}
