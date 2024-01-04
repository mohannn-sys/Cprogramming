/* Program to dynamically append two string in C. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *appendString(char *str1, char *str2) {
   int len1 = strlen(str1);
   int len2 = strlen(str2);
   int size = len1 + len2 + 1;

   char *s = calloc(size, sizeof(char));

   /*
   for(int i=0; i<len1; i++)
      s[i] = str1[i];

   for(int i=0; i<len2; i++)
      s[len1 + i] = str2[i];

   s[size-1] = "\0";
   */

   strcpy(s, str1);
   strcat(s, str2);

   return s;
}

int main() {
   char str1[10] = "Hello, ";
   char str2[10] = "World!";


   char *s = appendString(str1, str2);

   printf("s : %s\n", s);

   free(s);

   return 0;
}
