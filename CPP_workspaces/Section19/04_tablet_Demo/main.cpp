/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
int main()
{
    std::vector <int> test_scores {100,95,99,98};
    std::cout << "First score at index 0:" << test_scores.at(0) << std::endl;
    std::cout << "Second score at index 1:" << test_scores.at(1) << std::endl;
    std::cout << "Third score at index 3:" << test_scores.at(2) << std::endl;
    std::string hello{"Hello Xioami pad 6"};
    std::cout << hello << std::endl;
    std::cout<<"Hello World";

    return 0;
}