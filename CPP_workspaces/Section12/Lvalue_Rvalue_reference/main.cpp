#include <iostream>

int getValue() {
    return 42;
}

int main() {
    int x = 5; // x is an l-value
    int& ref = x; // ref is an l-value reference

    // 10 is an r-value
    int result = 10 + 20; 

    // getValue() returns an r-value
    int value = getValue(); 

    std::cout << "x = " << x << std::endl;
    std::cout << "result = " << result << std::endl;
    std::cout << "value = " << value << std::endl;

    return 0;
}
