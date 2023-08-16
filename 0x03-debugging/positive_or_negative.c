#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative: chacka is a number is either positivr or a negative
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
}
