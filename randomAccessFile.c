/*
Random access in the context of file handling refers to the ability to move the file pointer to any position within a file and 
read or write data from that position. In C, the fseek() and ftell() functions are used to facilitate random access to files.

1. fseek():
   - Description: Moves the file pointer to a specified position within the file.
   - Syntax: int fseek(FILE *stream, long int offset, int whence);
   - Parameters:
     - stream: A pointer to the FILE structure representing the file.
     - offset: The number of bytes to move the file pointer.
     - whence: Specifies the reference point for the offset (SEEK_SET, SEEK_CUR, SEEK_END).
   - Return Value:
     - Returns 0 on success.
     - Returns non-zero on failure.

   - Example:
     fseek(filePointer, 20L, SEEK_SET); // Move the file pointer to the 20th byte from the beginning of the file

2. ftell():
   - Description: Returns the current position of the file pointer within the file.
   - Syntax: long int ftell(FILE *stream);
   - Parameters:
     - stream: A pointer to the FILE structure representing the file.
   - Return Value:
     - Returns the current position of the file pointer.
     - Returns -1L on failure.

   - Example:
     long int position = ftell(filePointer); // Get the current position of the file pointer
*/
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open the file in binary mode for both reading and writing
    filePointer = fopen("random_access.txt", "r+");

    // Check if file opening is successful
    if (filePointer == NULL) {
        printf("Error opening file.");
        return 1;
    }


    // Move the file pointer to the 20th byte from the beginning
    fseek(filePointer, 20L, SEEK_SET);

    // Write data at the new position
    fprintf(filePointer, "Random Access!");

    // Get the current position of the file pointer
    long int position = ftell(filePointer);

    printf("Current position of the file pointer: %ld\n", position);

    // Close the file
    fclose(filePointer);

    return 0;
}
