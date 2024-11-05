/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
int main()
{
    std::ifstream in_file;
    std::string line;
    int num;
    double total;
    
    in_file.open("test.txt");
    if(!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    while(!in_file.eof())
    {
        in_file >> line >> num >> total;
        std::cout << std::setw(10) << std::left <<line
                  << std::setw(10) << num
                  << std::setw(10) << total << std::endl;
    }
    in_file.close();
    //std::cout<<"Hello World";

    return 0;
}