//1. Return values
FILE *fp = fopen("file.txt", "r");
if (fp == NULL) {
    printf("Failed to open file\n");
    return -1;
}
//2. Errno
#include <errno.h>
#include <stdio.h>

FILE *fp = fopen("nonexistentfile.txt", "r");
if (fp == NULL) {
    printf("Error: %s\n", strerror(errno));
    return -1;
}
//3. Exit status
if (some_error_condition) {
    printf("An error occurred\n");
    exit(1);
}
//4. Error handling function
FILE *fp = fopen("file.txt", "r");
if (fp == NULL) {
    perror("Error");
    return -1;
}
