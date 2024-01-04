/*Program to demonstrate the use of functions in ctype.h*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[70];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Check if the input contains only alphabetic characters
    int isAlphabetic = 1;
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (!isalpha(inputString[i])) {
            isAlphabetic = 0;
            break;
        }
    }

    if (isAlphabetic) {
        printf("The input contains only alphabetic characters.\n");
    } else {
        printf("The input contains non-alphabetic characters.\n");
    }

    // Convert the input string to uppercase
    printf("Uppercase version of the string: ");
    for (int i = 0; inputString[i] != '\0'; i++) {
        putchar(toupper(inputString[i]));
    }

    // Convert the input string to lowercase
    printf("\nLowercase version of the string: ");
    for (int i = 0; inputString[i] != '\0'; i++) {
        putchar(tolower(inputString[i]));
    }


    // Check if the input contains any digits
    int containsDigit = 0;
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (isdigit(inputString[i])) {
            containsDigit = 1;
            break;
        }
    }

    if (containsDigit) {
        printf("\nThe input contains at least one digit.\n");
    } else {
        printf("\nThe input does not contain any digits.\n");
    }

    return 0;
}
