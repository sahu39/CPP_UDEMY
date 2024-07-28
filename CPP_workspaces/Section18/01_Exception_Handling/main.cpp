//Miles_per_Gallons no exception handling
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
    if(gallons != 0)
    {
        miles_per_gallons = static_cast<double>(miles)/gallons;
        std::cout << "Result:" << miles_per_gallons << std::endl;
    }
    else
    {
        std::cerr<< "Sorry Can't Divide by zero" << std::endl;
    }
    
    std::cout << "Bye" << std::endl;
	//std::cout << "My Template" << std::endl;
	return 0;
}
