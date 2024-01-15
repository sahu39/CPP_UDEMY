#include <iostream>
#include <vector>
#include <string>

using namespace std;
void pass_by_value1(vector <string>);
void print_vector(vector <string>);
int main()
{
    vector <string> mystring {"Sunil","Chinmaya","Swagat"};
    cout << "Before pass by value function:";
    print_vector(mystring);
    cout << "After pass by value function:";
    pass_by_value1(mystring);
    print_vector(mystring);
	return 0;
}

void print_vector(vector <string> s){
    for(auto str : s){
        cout << str << " ";
    }
    cout << endl;
}

void pass_by_value1(vector <string> s1){
    s1.clear();
}