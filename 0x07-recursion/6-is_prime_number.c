#include "holberton.h"
int checkprime(int i, int n);
/**
 * checkprime - returns 1 if n is prime, 0 otherwise
 * @n: the number we are checking primality for
 * @i: the possible factor of n
 *
 *Return: return 1 if prime or 0 if not
 */
int checkprime(int i, int n)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (checkprime(i + 1, n));
}

/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: the number we are checking primality for
 *
 * Return: return 1, otherwise 0
 */
int is_prime_number(int n)
{
	return (checkprime(2, n));
}
