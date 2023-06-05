#include <stdlib.h>

int *arr = malloc(10 * sizeof(int)); // Allocate memory for an array of 10 integers.

if (arr == NULL) {
    // Check if the allocation was successful.
    printf("Error: could not allocate memory!\n");
    exit(1);
}

// Use the array...

free(arr); // Deallocate the memory when it's no longer needed.
