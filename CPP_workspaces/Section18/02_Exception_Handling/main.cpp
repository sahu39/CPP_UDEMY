#include <iostream>

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallons {};
    
    std::cout << "Enter the Miles:";
    std::cin >> miles;
    std::cout << "Enter the Gallons:";
    std::cin >> gallons;
    //miles_per_gallons = miles/gallons;
    try{
        if(gallons == 0)
            throw 0;
        miles_per_gallons = static_cast<double>(miles)/gallons;
        std::cout << "Result:" << miles_per_gallons << std::endl;
    }
    catch(int &ex)
    {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
 
    
    std::cout << "Bye" << std::endl;

	return 0;
}
