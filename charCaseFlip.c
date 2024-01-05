//Program to flip the case of characters in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void flipCase(char *str) {
   int length = strlen(str);

   for (int i=0; i<length; i++) {
      if (isupper(str[i]))
         str[i] = tolower(str[i]);
      else if (islower(str[i]))
         str[i] = toupper(str[i]);
   }
}

int main() {
   char str[] = "abcdEFGHijklMNOPqrstUVWXyz";

   flipCase(str);

   printf("Result : %s\n", str);

   return 0;
}
