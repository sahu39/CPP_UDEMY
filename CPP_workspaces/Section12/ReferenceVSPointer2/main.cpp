#include <iostream>

int main() {
    int x = 5;
    //int y = 10;

    // Reference
    int& ref = x; // Reference to x
    ref = 20; // Changes the value of x
    std::cout << "x = " << x << std::endl; // Output: x = 20

    // Pointer
    int* ptr = &x; // Pointer to x
    *ptr = 30; // Changes the value of x via pointer
    std::cout << "x = " << x << std::endl; // Output: x = 30

    return 0;
}

