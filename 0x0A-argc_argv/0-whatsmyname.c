#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: arraythat contains the program command line arguments
 * Return: 0 - Sucess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
