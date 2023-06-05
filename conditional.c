#include <stdio.h>

int main()
{
    int a = 10;
    if (a > 15)
    {
        printf("a is greater than 15\n");
    }
    else if (a > 5)
    {
        printf("a is greater than 5 but not greater than 15\n");
    }
    else
    {
        printf("a is not greater than 5\n");
    }

    return 0;
}