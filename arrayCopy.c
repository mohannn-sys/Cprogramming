//Program to create an independent copy of an array

#include <stdio.h>
#include <stdlib.h>

int *copyArray(int *array, int length) {
   int *c = malloc(length * sizeof(int));

   for (int i=0; i<length; i++)
      c[i] = array[i];

   return c;
}

int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int length = sizeof(arr)/sizeof(arr[0]);
   int  *arrCopy = copyArray(arr, length);

   printf("Original Array Before Modification:\n");
   for (int i=0; i<length; i++)
      printf("%d ", arr[i]);

   printf("\nCopy Array Before Modification :\n");
   for (int i=0; i<length; i++)
      printf("%d ", arrCopy[i]);


   arrCopy[2] = 100;
   arr[4] = 500;

   printf("\nOriginal Array After Modification :\n");
   for (int i=0; i<length; i++)
      printf("%d ", arr[i]);


   printf("\nCopy Array After Modification :\n");
   for (int i=0; i<length; i++)
      printf("%d ", arrCopy[i]);
   printf("\n");

   free(arrCopy);

   return 0;
}
