#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("file1.txt", "r");
    outputFile = fopen("file2.txt", "w");

    while((ch = fgetc(inputFile)) != EOF) 
        fputc(ch, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
