#include "main"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */
void print_alphabet_x10(void);
{
	int n;
	char bt;

	for (n = '0'; n <= '9'; n++)
	{
		for (bt = 'a'; bt <= 'z'; bt++)
			_putchar(bt);
		_putchar('\n');
	}
}
