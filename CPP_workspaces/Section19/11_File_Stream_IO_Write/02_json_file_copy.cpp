#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::string line {};
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
    while(std::getline(json_file,line))//single line
    {
        //json_file_copy << line;//it will put in a single line
        json_file_copy << line << "\n"; //it will put in multiline as expected
    }
    std::cout << "File copy successful" << std::endl;
    json_file.close();
    json_file_copy.close();
    return 0;
}