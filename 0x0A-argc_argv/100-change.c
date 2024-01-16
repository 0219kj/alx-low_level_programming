#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   int cents;
   int coins = 0;

   /** Check for correct number of arguments **/
   if (argc != 2) {
       printf("Error\n");
       return 1;
   }

   /** Parse the input cents **/
   cents = atoi(argv[1]);

   /** Handle negative input **/
   if (cents < 0) {
       printf("0\n");
       return 0;
   }
	/** Calculate the minimum number of coins using a greedy approach **/
   while (cents > 0) {
       if (cents >= 25) {
           cents -= 25;
           coins++;
       } else if (cents >= 10) {
           cents -= 10;
           coins++;
       } else if (cents >= 5) {
           cents -= 5;
           coins++;
       } else if (cents >= 2) {
           cents -= 2;
           coins++;
       } else {
           cents--;
           coins++;
       }
   }

   /** Print the minimum number of coins **/
   printf("%d\n", coins);

   return 0;
}

