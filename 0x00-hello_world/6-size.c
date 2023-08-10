#include<stdio.h>

/**
 * main function: shows the size of various types on the 
 * computer they're compiled on.
*/
int main(void)
{
	printf("Size of int: %zu \n",sizeof(int));
	printf("size of char: %zu \n", sizeof(char));
	printf("size of float: %zu \n", sizeof(float));
	printf("size of  double: %zu \n",sizeof(double));

	return (0);
}
