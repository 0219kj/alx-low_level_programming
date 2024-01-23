#include<stdio.h>
#include "main.h"

int main()
{
	char name[] = "Helo world, here comes the awesome level of every person as we wait to go into greatness";
	 char n[] = cpy_str(name);

	 for(int i=0; i < strlen(name); i++)
	 {
		 printf("%c", n[i]);
	 }

	 return (0);
}
