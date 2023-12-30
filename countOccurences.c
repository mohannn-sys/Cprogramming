//Program to count the occurences of an element in an array
#include <stdio.h>

int occurences(int array[], int length, int key) {
   int count = 0;
   for(int i=0; i<length; i++) {
      if (array[i] == key) count++;
   }
   return count;
}

int main () {
   int array[] = {4, 9, 5, 7, 4, 5, 8, 5, 1, 2, 3, 6, 9};

   int length = sizeof(array) / sizeof(int);
   int key = 5;
   int count = occurences(array, length, key);
   printf("Number of %d is %d\n", key, count);

   return 0;
}
