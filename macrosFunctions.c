#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SWAP(type, a, b) do { type temp = a; a = b; b = temp; } while (0)
#define ARRAY_SIZE(arr) ((int)(sizeof(arr) / sizeof((arr)[0])))

#define LOG_INFO(message) printf("[INFO] %s\n", message)

#define DEBUG  // Uncomment to enable debug code
#ifdef DEBUG
    #define DEBUG_LOG(message) printf("[DEBUG] %s\n", message)
#else
    #define DEBUG_LOG(message)
#endif



int main() {
   int a = 10;
   int b = 8;

   printf("MAX(%d, %d) = %d\n", a, b, MAX(a, b));
   printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));
   printf("SQUARE(%d) = %d\n", a, SQUARE(a));
   printf("ABS(-5) = %d\n", ABS(-5));

   SWAP(int, a, b);
   printf("After SWAP(a, b), a = %d and b = %d\n", a, b);
   int arr[] = {1,2,3,4,5,6,7};
   printf("ARRAY_SIZE(arr) = %d\n", ARRAY_SIZE(arr));

   LOG_INFO("This is an informational message.");
   LOG_INFO("Another message.");

   DEBUG_LOG("Debugging.");

   return 0;
}
