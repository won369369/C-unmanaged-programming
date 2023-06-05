int* badIdea() {
    int x = 10;
    return &x;  // not recommended, x will be destroyed after function call
}

int* goodIdea() {
    static int x = 10;
    return &x;  // OK, x lives throughout the program's lifetime
}


