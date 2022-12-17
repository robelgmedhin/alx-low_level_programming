#include <stdio.h>

/**
 * main - print out sizes of data types in C
 * code by robelmedhin
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long int)sizeof(c));
	printf("Size of a long long int: %lu bytes(S)\n", (unsigned long long int)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned float)sizeof(f));
	return (0);
}
