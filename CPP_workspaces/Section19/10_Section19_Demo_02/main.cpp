/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <fstream>

bool findsubstring(const std::string &word_to_find,std::string &targrt){
    std::size_t found = targrt.find(word_to_find);
    if(found == std::string::npos)
        return false;
    else
        return true;
}

int main()
{
    std::string pattern{};
    std::string word_read {};
    int word_count {};
    int  match_count {};
    std::ifstream file {};
    file.open("Romeo_Juliet.txt");
    if(!file.is_open()){
        std::cerr << "file not found" << std::endl;
        return -1;
    }
    
    std::cout << "Enter the pattern to search:";
    std::getline(std::cin,pattern);
    while(file >> word_read)
    {
        word_count++;
        if(findsubstring(pattern,word_read))
        {
            std::cout << word_read << " ";
            match_count++;
            
        }
    }
    
    std::cout << word_count << " words are searched..." << std::endl;
    std::cout << "The substring " << pattern << " was found " << match_count << " times" << std::endl; 
    file.close();
    return 0;
}