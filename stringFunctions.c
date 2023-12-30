#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 1. strcpy()
    char source[] = "Hello, World!";
    char destination[20];
    printf("\n1. strcpy()...\n");
    //Copies the contents of the source string to the destination string, including the null terminator. 
    //It returns a pointer to the destination string.
    //syntax : char* strcpy(char* destination, const char* source);
    strcpy(destination, source);
    // Print the result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    printf("\n2. strlen()...\n");
    // 2. strlen()
    //syntax : size_t strlen(const char* str);
    //Returns the length of the given string, excluding the null terminator.
    char myString[] = "Hello World!";
    size_t length = strlen(myString);
    // Print the result
    printf("Length of the string %s: %zu\n", myString, length);

    printf("\n3. strcmp()...\n");
    // 3. strcmp()
    // syntax : int strcmp(const char* str1, const char* str2);
    //Compares two strings lexicographically. It returns an integer less than, equal to, or greater than zero, 
    //indicating whether the first string is less than, equal to, or greater than the second.
    char str1[] = "apple";
    char str2[] = "banana";
    // Compare the strings
    int result = strcmp(str1, str2);
    // Print the result
    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }

    printf("\n4. strstr()...\n");
    // 4. strstr()
    //char* strstr(const char* haystack, const char* needle);
    //Searches for the first occurrence of the substring (needle) in the given string (haystack). 
    //It returns a pointer to the first occurrence or NULL if the substring is not found.
    char haystack[] = "The quick brown fox jumps over the lazy dog";
    char needle[] = "fox";
    // Search for the substring
    char* result1 = strstr(haystack, needle);
    // Print the result
    if (result1 != NULL) {
        printf("Found \"%s\" in \"%s\" at position %ld\n", needle, haystack, result1 - haystack);
    } else {
        printf("Substring not found\n");
    }

    printf("\n5. strcat()...\n");
    // 5. strcat()
    //char* strcat(char* destination, const char* source);
    //Concatenates (appends) the contents of the source string to the destination string. 
    //It returns a pointer to the destination string.
    char srcStr[20] = "Hello, ";
    char destStr[] = "World!";
    // Concatenate srcStr to destStr
    strcat(srcStr, destStr);
    // Print the result
    printf("Concatenated string: %s\n", srcStr);

    printf("\n6. strtok()...\n");
    // 6. strtok()
    //char* strtok(char* str, const char* delimiters);
    //Breaks a string into tokens based on specified delimiters. 
    //It returns a pointer to the next token in the string.
    char sentence[] = "This is a sample sentence.";
    const char delimiters[] = " ";
    // Tokenize the sentence
    char* token = strtok(sentence, delimiters);
    // Print the tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }

    printf("\n7. strcasecmp()...\n");
    // 7. strcasecmp()
    //int strcasecmp(const char* str1, const char* str2);
    //Compares two strings lexicographically in a case-insensitive manner. 
    //It returns an integer less than, equal to, or greater than zero.
    char firstStr[] = "apple";
    char secondStr[] = "ApPle";
    // Compare strings case-insensitively
    int result2 = strcasecmp(firstStr, secondStr);
    // Print the result
    if (result2 == 0) {
        printf("%s is equal to %s (case-insensitive)\n", firstStr, secondStr);
    } else {
        printf("%s is not equal to %s (case-insensitive)\n", firstStr, secondStr);
    }

    printf("\n8. strdup()...\n");
    // 8. strdup()
    //char* strdup(const char* str);
    //Allocates memory for a new string, copies the contents of the given string, 
    //and returns a pointer to the new string.
    const char original[] = "Hello, Dynamic Memory!";
    // Duplicate the string using strdup
    char* duplicate = strdup(original);
    // Check if memory allocation was successful
    if (duplicate != NULL) {
        // Print the result
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Free the allocated memory
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
