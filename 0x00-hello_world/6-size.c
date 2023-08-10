#include<stdio.h>

/**
 * main function: shows the size of various types on the 
 * computer they're compiled on.
*/
int main(void)
{
	printf("Size of char: %zu \n",sizeof(char));
	printf("size of int: %zu \n", sizeof(int));
	printf("size of long int: %zu \n", sizeof(long int));
	printf("size of  long long int: %zu \n",sizeof(long long int));
	printf("size of float: %zu \n",sizeof(float));

	return (0);
}
