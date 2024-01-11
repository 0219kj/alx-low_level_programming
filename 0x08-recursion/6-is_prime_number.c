#include "main.h"
/**
 * is_prime_number - checks if a numbver is prime or not
 * @n-number argument
 * return - int
 */
int is_prime_number(int n)
{
	int i;

	i = n /2;
	if (i ==1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
	return (1);
}
