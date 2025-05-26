#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file;
    file.open("Poem.txt");
    
    if(!file)
    {
        std::cerr << "Problem Opening file" << std::endl;
        return 1;
    }
    char c{};
    while(file.get(c))
    {
        std::cout << c;
    }
    std::cout << std::endl;
    file.close();
    return 0;
}