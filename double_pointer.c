int num = 25;
int *p = &num;   // p is a pointer to num
int **pp = &p;   // pp is a pointer to the pointer p

printf("%d\n", num);   // Prints: 25
printf("%d\n", *p);    // Prints: 25
printf("%d\n", **pp);  // Prints: 25

void setToNull(int **pp) {
    *pp = NULL;
}

int main() {
    int a = 10;
    int *p = &a;
    setToNull(&p);
    // Now, p is NULL.
    return 0;
}
