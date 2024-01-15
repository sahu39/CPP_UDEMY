//Function Overloading
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int add_two_numbers(int,int);
double add_two_numbers(double,double);
void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector <string>);
int main()
{
	int sum_of_integer = add_two_numbers(5,6);
    double sum_of_doubles = add_two_numbers(5.25,5.78);
    cout << "sum_of_integer:" << sum_of_integer << "\n" << "sum_of_doubles:" << sum_of_doubles << endl;
    print(10);
    print(12.34);
    print("sunil");
    print("sunil", "sahu");
    vector <string> str {"sunil", "kumar", "sahu"};
    print(str);
	return 0;
}
int add_two_numbers(int a,int b){
    return a+b;
}
double add_two_numbers(double a,double b){
    return a+b;
}
void print(int x){
    cout << "Printing int:" << x << endl; 
}
void print(double x){
    cout << "Printing double:" << x << endl;
}
void print(string x){
    cout << "Printing string:" << x << endl;
}
void print(string x,string y){
    cout << "Printing two string:" << x << " " << y << endl;
}
void print(vector <string> str){
    cout << "Printing vector:" << endl;
    for(auto ch : str){
        cout << ch << endl; 
    }
}