#include<stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a number using recursion
 * @n-integer argument to find factorial for
 * return - the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return ( -1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
