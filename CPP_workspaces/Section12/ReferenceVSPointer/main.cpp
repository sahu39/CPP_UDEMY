#include <iostream>

void incrementViaReference(int& num) {
    num++;
}

void incrementViaPointer(int* ptr) {
    (*ptr)++;
}

int main() {
    int x = 5;
    int* ptr = &x; // Pointer to x

    std::cout << "Before increment: x = " << x << std::endl;

    // Increment via reference
    incrementViaReference(x);

    std::cout << "After increment via reference: x = " << x << std::endl;

    // Increment via pointer
    incrementViaPointer(ptr);

    std::cout << "After increment via pointer: x = " << x << std::endl;

    return 0;
}

