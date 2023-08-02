#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - it says if an interger is a prime
 * @n: evaluate number
 * written by daniel
 * Return: 0 always excellent
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime or not
 * @n: number to evaluate
 * @i: iterator
 * written by daniel
 * Return: 1 if n is prime , o if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
