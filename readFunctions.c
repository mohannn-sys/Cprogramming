//Program to demonstrate the use of various read file functions.
#include <stdio.h>

int main() {
    FILE *file = fopen("file1.txt", "r");

    /*
        1. fgetc() : Reads a single char from the file at a time.
        syntax: int fgetc(FILE *stream);
    */
    printf("First 5 chars : \n");
    char ch;
    for(int i=0; i<5; i++) {
        ch = fgetc(file);
        printf("Char %d : %c\n", i, ch);
    }

    /*
        2. fgets(): Reads a line (up to a specified number of characters or until a newline character is encountered) from the file.
        Syntax: char *fgets(char *str, int n, FILE *stream);
    */
    char buffer1[100], buffer2[20];
    fgets(buffer1, sizeof(buffer1), file);
    fgets(buffer2, 10, file);
    printf("\nRemaining chars from first Line : %s\n", buffer1);
    printf("First 10 chars from second line : %s\n", buffer2);

    /*
        3. fscanf(): Reads formatted data from the file, similar to scanf().
        Syntax: int fscanf(FILE *stream, const char *format, ...);
    */
    fscanf(file, "%c", &ch);
    printf("\nChar after that : %c", ch);

    /*
        4. rewind(): Resets the file position indicator to the beginning of the file.
        Syntax: void rewind(FILE *stream);
    */
    printf("\nChars after that before rewind(file) : \n");
    for(int i=0; i<5; i++) {
        ch = fgetc(file);
        printf("Char %d : %c\n", i, ch);
    }
    rewind(file);
    printf("Chars after rewind(file) : \n");
    for(int i=0; i<5; i++) {
        ch = fgetc(file);
        printf("Char %d : %c\n", i, ch);
    }

    fclose(file);

    return 0;
}
