#include <stdio.h>

int main() {
    int scores[5] = {90, 85, 80, 95, 100};

    for (int i = 0; i < 5; i++) {
        printf("Score %d: %d\n", i+1, scores[i]);
    }

    return 0;
}
