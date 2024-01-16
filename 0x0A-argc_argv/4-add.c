#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	int sum;
	int num1;
	int num2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
	sum = num1 + num2;
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);

	return (0);
}

