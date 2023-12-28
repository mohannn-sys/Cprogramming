/*
  Author: Mohan Kumar
  Date: 2023-12-28
  Description: This program dynamically allocates memory to store an array of strings.
               It prompts the user to enter the length of the string array and then
               iteratively takes user input for each string. The resulting array is
               displayed, and the allocated memory is properly freed to prevent memory leaks.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1024

int main() {
   // Declare a pointer to a pointer to char to store an array of strings
   char **string;

   // Declare a variable to store the length of the string array
   int length = 0;

   // Prompt the user to enter the length of the string array
   printf("Enter the length of string array : ");
   scanf("%d", &length);

   // Consume the newline character left in the input buffer after scanf
   getchar();

   // Allocate memory for the array of strings
   string = malloc(length * sizeof(char *));
   char buffer[MAX_SIZE];

   // Input strings from the user and store them in the array
   for (int i = 0; i < length; i++) {
      printf("Enter the string %d : ", i);

      // Use fgets to input strings and handle newline characters
      fgets(buffer, MAX_SIZE, stdin);

      // Allocate memory for each string and copy it into the array
      string[i] = malloc((strlen(buffer) + 1) * sizeof(char));  // Include space for the null terminator
      strcpy(string[i], buffer);
   }

   // Display the resulting string array
   printf("\nResulting string array : \n");
   for (int i = 0; i < length; i++) {
      printf("string[%d] = %s\n", i, string[i]);
   }

   // Free the allocated memory for each string and the array itself
   for (int i = 0; i < length; i++) {
      free(string[i]);
   }
   free(string);

   return 0;
}
