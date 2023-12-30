/*
This program demonstrates the usage of pointers, dynamic memory allocation, and proper memory deallocation to avoid memory leaks. 
It covers both simple structures and structures with dynamically allocated strings
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a Point structure with x and y coordinates
typedef struct {
   int x;
   int y;
} Point;

// Define a Location structure with x and y coordinates and a description string
typedef struct {
   int x;
   int y;
   char *description;
} Location;

int main(int argc, char *argv[]) {
   // Allocating memory for a Point on the stack
   Point p;
   p.x = 4;
   p.y = 5;
   printf("Point p(%d, %d)\n", p.x, p.y);

   // Allocating memory for a Point on the heap
   Point *p1;
   p1 = malloc(sizeof(Point));
   p1->x = 2;
   p1->y = 7;
   printf("Point p1(%d, %d)\n", p1->x, p1->y);
   free(p1);

   // Dynamic allocation of an array of struct Point
   int length = 3;
   Point *array;
   array = malloc(sizeof(Point) * length);
   array[0].x = 1;
   array[0].y = 2;
   array[1].x = 3;
   array[1].y = 4;
   array[2].x = 5;
   array[2].y = 6;
   printf("Array...\n");
   for (int i = 0; i < length; i++)
      printf("(%d, %d)\n", array[i].x, array[i].y);
   printf("\n");

   // Reallocating array
   length = 4;
   array = realloc(array, sizeof(Point) * length);
   array[3].x = 7;
   array[3].y = 8;
   printf("Array after reallocation...\n");
   for (int i = 0; i < length; i++)
      printf("(%d, %d)\n", array[i].x, array[i].y);
   printf("\n");

   free(array);

   // Dynamically allocating an array of struct Location with a pointer
   Location *loc;
   loc = malloc(sizeof(Location) * 3);
   loc[0].x = 1;
   loc[0].y = 2;
   loc[0].description = malloc(sizeof(char) * 10);
   strcpy(loc[0].description, "location 1");
   loc[1].x = 3;
   loc[1].y = 4;
   loc[1].description = malloc(sizeof(char) * 10);
   strcpy(loc[1].description, "location 2");
   loc[2].x = 5;
   loc[2].y = 6;
   loc[2].description = malloc(sizeof(char) * 10);
   strcpy(loc[2].description, "location 3");

   printf("Location Array...\n");
   for (int i = 0; i < 3; i++)
      printf("%s (%d, %d)\n", loc[i].description, loc[i].x, loc[i].y);
   printf("\n");

   // Free the allocated memory for descriptions and the array of locations
   for (int i = 0; i < 3; i++)
      free(loc[i].description);
   free(loc);

   return 0;
}
