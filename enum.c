#include <stdio.h>

enum Weekdays {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main() {
    enum Weekdays today = Wednesday;

    if (today == Wednesday) {
        printf("Today is Wednesday!\n");
    }

    return 0;
}
