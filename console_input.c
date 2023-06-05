#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    return 0;
}

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: %c\n", c);
    return 0;
}
