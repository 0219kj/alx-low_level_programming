#include<stdio.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s", argv[argc]);
	else
		printf("%s", argv[0]);
	return (0);
}
