#include <stdio.h>
#include <time.h>
/*
#pragma directives in GCC (GNU Compiler Collection) provide a way to give special instructions to the compiler during compilation. 
These directives are often specific to GCC and may not be supported by other compilers. Here are some commonly used `#pragma` directives in GCC:

1. #pragma GCC optimize:
   - This pragma allows you to set specific optimization levels for a certain portion of code. It provides a way to fine-tune optimization settings.
   - Example
*/

void unoptimizedFunction() {
    int result = 0;
    for (int i = 0; i < 100000; ++i) {
        result += i;
    }
    printf("Unoptimized Result: %d\n", result);
}

#pragma GCC optimize("O3")
void optimizedFunction() {
    int result = 0;
    for (int i = 0; i < 100000; ++i) {
        result += i;
    }
    printf("Optimized Result: %d\n", result);
}

double measureExecutionTime(void (*function)(), const char* functionName) {
    clock_t start, end;
    start = clock();
    function();
    end = clock();

    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%s Execution Time: %f seconds\n", functionName, cpu_time_used);

    return cpu_time_used;
}


/*
2. #pragma GCC diagnostic:
   - This pragma allows you to enable or disable specific compiler warnings or diagnostics for a specific section of code.
   - Example:
*/

void unusedVariableExample() {
    int unusedVar;
    // This variable is intentionally left unused to trigger a warning
}


/*
3. #pragma GCC warning:
   - This pragma allows you to emit a custom warning message during compilation.
   - Example:
*/

void customWarningExample() {
    // Emit a custom warning message during compilation
    #pragma GCC warning "This is a custom warning message"

    // Code that follows the custom warning
    printf("Executing the custom Warning function...\n");
}



/*
4. #pragma GCC error:
   - This pragma allows you to emit a custom error message during compilation, causing the compilation to fail.
   - Example:

void customErrorExample() {
    // Emit a custom error message during compilation
    #pragma GCC error "This is a custom error message"

    // Code that follows the custom error (will not be reached due to the error)
    printf("Executing the function...\n");
}
*/

/*
5. #pragma GCC push_options` and `#pragma GCC pop_options:
   - These pragmas allow you to save and restore the current state of some compiler options.
   - Example:
*/



int main() {
    // 1. #pragma GCC optimize
    printf("Before Optimization:\n");
    double unoptimizedTime = measureExecutionTime(unoptimizedFunction, "Unoptimized");

    printf("\nAfter Optimization:\n");
    double optimizedTime = measureExecutionTime(optimizedFunction, "Optimized");

    // Print the performance improvement
    double improvement = unoptimizedTime - optimizedTime;
    printf("\nPerformance Improvement: %f seconds\n", improvement);

    // 2. #pragma GCC diagnostic
    // Suppressing the warning for the unused variable in unusedVariableExample
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    unusedVariableExample();
    #pragma GCC diagnostic pop

    // Code outside the pragma is not affected by the suppression
    unusedVariableExample(); // This will still trigger the warning

    // 3. #pragma GCC warning
    // Calling the function with the custom warning
    customWarningExample();

    // 4. #pragma GCC error
    // Calling the function with the custom error (will result in compilation failure)
    //customErrorExample();

    return 0;
}
