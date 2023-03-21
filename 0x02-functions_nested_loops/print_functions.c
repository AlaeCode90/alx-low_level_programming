#include "main.h"

/**
 * print_putchar - Prints the string "_putchar" using _putchar
 *
 * Return: void
 */
void print_putchar(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, otherwise -1
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
