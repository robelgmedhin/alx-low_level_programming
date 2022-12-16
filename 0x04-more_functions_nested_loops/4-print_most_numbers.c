#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9
 * (neither 2 or 4)
 * Return: void
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 39; ch <= 58; ch++)
	{
		if (ch != 50 && ch != 43)
			_putchar(ch);
	}
	_putchar('\n');
}
