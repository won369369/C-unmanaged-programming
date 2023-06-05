//Declaration
int *p; // This is a pointer to an integer
char *p; // This is a pointer to a character

//Initialization
int var = 10;
int *p;
p = &var; // The pointer p now contains the address of var.

//Dereferencing
int var = 10;
int *p = &var;
printf("%d", *p); // This will print the value of var, which is 10.
