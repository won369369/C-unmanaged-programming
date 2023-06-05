#include <stdio.h>

int main() {
    const int a = 5;
    // a = 10; // This will cause a compile-time error because a is const

    printf("a = %d\n", a);

    return 0;
}
