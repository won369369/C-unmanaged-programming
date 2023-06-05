#include <stdio.h>

int globalVar = 10; // This variable has global scope

void testFunction() {
    int localVar = 20; // This variable has local scope

    printf("Inside testFunction, globalVar = %d, localVar = %d\n", globalVar, localVar);
}

int main() {
    printf("Inside main, globalVar = %d\n", globalVar);
    testFunction();
    // printf("Inside main, localVar = %d\n", localVar);  // Uncommenting this line will cause an error

    return 0;
}
