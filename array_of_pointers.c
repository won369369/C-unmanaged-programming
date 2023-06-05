#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    for(int i = 0; i < 3; i++) {
        printf("ptr[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
