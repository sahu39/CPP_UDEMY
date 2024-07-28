#include <iostream>
double miles_per_gallon(int miles, int gallons)
{
    if(gallons == 0)
        throw 0;
    if((miles < 0) || (gallons < 0))
        throw std::string{"Negative values miles or gallons"};
    return static_cast<double>(miles)/gallons;
}
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
        miles_per_gallons = miles_per_gallon(miles,gallons);
        std::cout << "Result:" << miles_per_gallons << std::endl;
    }
    catch(int &ex)
    {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
    catch(std::string &ex)
    {
        std::cerr << ex << std::endl;
    }
 
    
    std::cout << "Bye" << std::endl;
	return 0;
}
