#include <stdio.h>

int main() {
    int a = 10;

    loop:do {
        if (a == 15) {
            /* Skip the iteration */
            a = a + 1;
            goto loop;
        }
        printf("value of a: %d\n", a);
        a++;     
    }while( a < 20 );

    return 0;
}
