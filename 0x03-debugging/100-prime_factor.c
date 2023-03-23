#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long factor = 2;

	while (factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor = largest_prime_factor(number);

	printf("%lu\n", largest_factor);
	return (0);
}

