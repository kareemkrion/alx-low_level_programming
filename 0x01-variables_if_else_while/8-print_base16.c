#include <stdio.h>

/**
 * main - prints out numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char le;

	for (num = 0; num < 16; num++)
		putchar((num % 16) = '0');

	for (le = 'a'; <= 'f'; le++)
		putchar(le);
	putchar('\n');

	return (0);
}
