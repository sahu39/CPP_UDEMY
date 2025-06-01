#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
int main()
{
    int line_num {0};
    std::string line {};
	std::ifstream file1 {"Romeo_Juliet.txt"};
    std::ofstream file2 {"Romeo_Juliet_copy.txt"};
    if(file1){
        while(std::getline(file1,line))
        {
            line_num++;
            file2 << std::left << std::setw(3) << line_num << ". " << line << std::endl;  
        }
    }
    else{
        std::cout << "File1 does not exist" << std::endl;
    }
    file1.close();
    file2.close();
	return 0;
}
