#include<stdio.h>

int main(int argc, char ** argv)
{
	int array_len;

	array_len = sizeof(*argv[argc]) / sizeof(*argv[0]);
	printf("%d\n", array_len);
	return (0);
}
