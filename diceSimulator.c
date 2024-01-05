//Program to simulate rolling of dice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   srand(time(NULL));

   int dice = 10;
   int roll = 0;

   for (int i=1; i<=dice; i++) {
      roll = rand() % 6 + 1;
      printf("Dice %d : %d\n", i, roll);
   }

   return 0;
}
