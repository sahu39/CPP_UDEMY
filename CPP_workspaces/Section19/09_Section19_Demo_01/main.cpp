#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::string response{};
    std::string name{};
    std::string actual_response {"ABCDE"};
    int score {};
    int total {};
    float avg_score {};
    std::ifstream test{"test.txt"};
    if(!test){
        std::cerr << "Test File does not exist" << std::endl;
        return 1;
    }

    std::cout << std::setw(20) << std::left << "Student" << "Score" << std::endl;
    std::cout << "===============================" << std::endl;

    while(std::getline(test, response) && std::getline(test, name))
    {
        int score = 0;
        for(int i = 0; i < response.length(); ++i)
        {
            if(response[i] == actual_response[i])
                score++;
        }
        total++;
        avg_score += score;
        std::cout << std::setw(20) << std::left << name << score << std::endl;
    }
    std::cout << "===============================" << std::endl;
    std::cout << std::setw(20) << std::left << "Average score" << static_cast<double>(avg_score)/total<< std::endl;
    return 0;
}
