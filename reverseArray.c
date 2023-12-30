//Program to reverse an array
#include <stdio.h>

void reverse(int array[], int length) {
   int temp = 0;
   for (int i=0; i<(length/2); i++) {
      temp = array[i];
      array[i] = array[length-i-1];
      array[length-i-1] = temp;
   }
}

int main () {
   int array[] = {1,2,3,4,5,6,7,8,9,0};
   int length = sizeof(array) / sizeof(array[0]);
   printf("Array before reversing...\n");
   for (int i=0; i<length; i++)
      printf("%d\n", array[i]);
   printf("\n");

   reverse(array, length);

   printf("Array after reversing...\n");
   for (int i=0; i<length; i++)
      printf("%d\n", array[i]);
   printf("\n");

   return 0;
}

