#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int result = 0;
    va_list args;  // Declare a variable of type va_list

    va_start(args, count);  // Initialize the va_list with the variable arguments

    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);  // Access each argument using va_arg
    }

    va_end(args);  // Cleanup

    return result;
}

int main() {
    int result = sum(3, 1, 2, 3);  // Calls sum with three variable arguments
    printf("sum(3,1,2,3)=%d\n", result);

    printf("sum(9, 1,2,3,4,5,6,7,8,9) = %d\n", sum(9, 1,2,3,4,5,6,7,8,9));

    return 0;
}
