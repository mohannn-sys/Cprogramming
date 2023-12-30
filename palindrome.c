//Program to check if a string is palindrome or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char string[]) {
   int length = strlen(string);

   for (int i=0; i<(length/2); i++) 
      if (string[i] != string[length-i-1]) 
         return false;

   return true;
}

int main () {
   char string1[] = "racecar";
   char string2[] = "abcdba";
   char string3[] = "hannah";

   printf("%s is palindrome? %s\n", string1, ispalindrome(string1)==true ? "true" : "false");
   printf("%s is palindrome? %s\n", string2, ispalindrome(string2)==true ? "true" : "false");
   printf("%s is palindrome? %s\n", string3, ispalindrome(string3)==true ? "true" : "false");


   return 0;
}
