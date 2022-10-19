#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: The number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int bt = n % 10;

	if (bt < 0)
		bt *= -1;
	_putchat(bt + '0');

	return (0);
}
