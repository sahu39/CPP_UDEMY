#include <iostream>
#include <fstream>
#include <string>
int main()
{
    //std::string line {};
    char c {};
    std::ifstream json_file {"sample-config.json"};
    std::ofstream json_file_copy {"sample-config-copy.json"};
    if(!json_file)
    {
        std::cerr << "Json input file open error" << std::endl;
        return 1;
    }
    if(!json_file_copy)
    {
        std::cerr << "Json output file open error" << std::endl;
        return 1;
    }
    while(json_file.get(c))//read single character
    {
        json_file_copy.put(c);
    }
    std::cout << "File copy successful" << std::endl;
    json_file.close();
    json_file_copy.close();
    return 0;
}