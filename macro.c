#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 20;
    printf("Max is: %d\n", MAX(x, y));
    return 0;
}
