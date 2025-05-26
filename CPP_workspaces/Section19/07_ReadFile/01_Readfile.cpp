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
    std::string line{};
    while(std::getline(file,line))
    {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}