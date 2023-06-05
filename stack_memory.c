#include <stdio.h>

void myFunction() {
    int x = 10; // This variable is stored in stack memory
    printf("%d\n", x);
}

int main() {
    myFunction();
    return 0;
}
