#include <stdio.h>

/**
 * main - prints out size of various types
 * Return: Always 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longInttype;
	long long int llInttype;
	float floatType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longInttype));
	printf("Size of long long long int: %zu bytes\n", sizeof(llInttype));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
