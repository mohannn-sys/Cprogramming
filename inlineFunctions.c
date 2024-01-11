/*
An inline function is a function that is expanded in place at the point where it is called, rather than being called through a regular function call mechanism.
The inline keyword is used to indicate to the compiler that a particular function should be treated as inline.
The main advantage of using inline functions is that it can lead to potentially faster code execution by avoiding the overhead associated with a
regular function call. Instead of jumping to a separate function, the code of the inline function is inserted directly at the point where the
function is called, reducing the function call overhead.
*/

//Compilation : "gcc -O2 -finline-functions main.c inline_functions.h" or
//"gcc -O2 -finline-functions main.c"

#include <stdio.h>

inline int add(int x, int y) {
    return x + y;
}

inline int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20, result;

    // Potentially inlined function calls
    result = add(a, b);
    printf("Sum: %d\n", result);

    result = max(a, b);
    printf("Maximum: %d\n", result);

    return 0;
}


