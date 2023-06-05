#include <stdio.h>

int main() {
    int a;
    char b;
    double c;

    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of a: %lu bytes\n", sizeof(a));

    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of b: %lu bytes\n", sizeof(b));

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of c: %lu bytes\n", sizeof(c));

    return 0;
}
