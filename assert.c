#include <assert.h>

int main() {
    int x = 7;
    assert(x == 7); // This will do nothing
    assert(x == 5); // This will terminate the program and display an error
    return 0;
}
