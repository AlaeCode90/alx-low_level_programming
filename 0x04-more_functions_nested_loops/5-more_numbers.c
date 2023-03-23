#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14 ten times, followed by a newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
