#include <stdarg.h>
#include <stdio.h>

double average(int count, ...) {
    va_list args;
    double sum = 0;

    // initialize args to store all values after count
    va_start(args, count);

    // access all the arguments assigned to args
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }

    // clean memory reserved for args
    va_end(args);

    return sum / count;
}

int main() {
    printf("Average of 2, 3, 4, 5 = %.2f\n", average(4, 2.0, 3.0, 4.0, 5.0));
    printf("Average of 5, 10, 15 = %.2f\n", average(3, 5.0, 10.0, 15.0));
    return 0;
}
