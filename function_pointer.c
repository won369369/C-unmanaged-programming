// A simple function that takes an int parameter and returns void
void simpleFunction(int param) {
    printf("Value: %d\n", param);
}

// A function pointer to a function like simpleFunction
void (*functionPtr)(int);

functionPtr = simpleFunction;

functionPtr(5);  // Output: Value: 5

void functionOne(int param) {
    printf("Function One with param: %d\n", param);
}

void functionTwo(int param) {
    printf("Function Two with param: %d\n", param);
}

void (*functionPtr)(int);

functionPtr = functionOne;
functionPtr(10);  // Output: Function One with param: 10

functionPtr = functionTwo;
functionPtr(20);  // Output: Function Two with param: 20
