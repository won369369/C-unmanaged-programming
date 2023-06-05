int x = 10;
float y = 20.5;
char ch = 'a';

// a void pointer
void *void_ptr;

// a void pointer can hold the address of any type of variable
void_ptr = &x;  // holds address of int
printf("The integer x is: %d\n", *((int *)void_ptr));

void_ptr = &y;  // holds address of float
printf("The float y is: %.2f\n", *((float *)void_ptr));

void_ptr = &ch;  // holds address of char
printf("The char ch is: %c\n", *((char *)void_ptr));
