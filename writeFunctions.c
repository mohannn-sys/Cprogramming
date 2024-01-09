#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("file1.txt", "a");

    /*
        1. fputc(): Writes a single character to the file.
        Syntax: int fputc(int character, FILE *stream);
    */
    fputc('A', file);


    /*
        2. fputs(): Writes a string to the file.
        Syntax: int fputs(const char *str, FILE *stream);
    */
    fputs("\nHello, World!", file);


    /*
        3. fprintf(): Writes formatted data to the file, similar to printf().
        Syntax: int fprintf(FILE *stream, const char *format, ...);
    */
    char stringValue[] = "string";
    int intValue = 20;
    float floatValue = 30.05;
    fprintf(file, "\nString : %s, Integer: %d, Float: %.2f\n", stringValue, intValue, floatValue);

    /*
        4. fwrite(): Writes a specified number of elements to the file. Often used for binary data.
        Syntax: size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);
    */
    int array[] = {1, 2, 3, 4, 5};
    char message[] = "\nThis is string.\n";
    fwrite(array, sizeof(int), 5, file);
    fwrite(message, sizeof(char), strlen(message), file);

    fclose(file);
    return 0;
}



