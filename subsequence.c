//Program to check is string str1 is subsequence of the string str2
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubstring(char str1[], char str2[]) {
   int len1 = strlen(str1);
   int len2 = strlen(str2);

   if (len1 > len2) return false;

   int i = 0;
   int j = 0;

   while ((i<len1) && (j<len2)) {
      if (str1[i] == str2[j])
         i++;
      j++;
   }
   return (i==len1) ? true : false;
}

int main () {
   char str1[] = "aeiou";
   char str2[] = "abcdefghijklmnopqrstuvwxyz";

   printf("%s is substring of %s ? %s\n", str1, str2, isSubstring(str1, str2) == true ? "true" : "false");
   printf("%s is substring of %s ? %s\n", "best", str2, isSubstring("best", str2) == true ? "true" : "false");
   printf("%s is substring of %s ? %s\n", "feast", str2, isSubstring("feast", str2) == true ? "true" : "false");



   return 0;
}
