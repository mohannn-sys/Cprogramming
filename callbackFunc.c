//Program to demonstrate function pointer, callback functions and function pointers as array
#include <stdio.h>

void performOperation(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("Result: %d\n", result);
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*sum)(int, int);  // Declaration of a function pointer named "sum"

    // Assigning the address of the "sum" function to the "add" function pointer
    sum = add;
    int result = sum(3, 4);  // Equivalent to calling add(3, 4)
    printf("sum(3, 4) = %d\n", result);

    performOperation(3, 4, add);        // Callback with addition
    performOperation(3, 4, multiply);   // Callback with multiplication

    int (*operations[])(int, int) = {add, multiply}; //Function Pointers as Array Elements
    printf("\noperations[0](5,3) = %d\n", operations[0](5,3));
    printf("\noperations[1](5,3) = %d\n", operations[1](5,3));


    return 0;
}
