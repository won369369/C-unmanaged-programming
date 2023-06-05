#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // Relational operator
    if (a < b) {
        printf("a is less than b\n");
    }

    // Logical operator
    if (a > 0 && b > 0) {
        printf("Both a and b are positive\n");
    }

    // Conditional operator
    int max = (a > b) ? a : b;
    printf("The maximum value is %d\n", max);

    return 0;
}
