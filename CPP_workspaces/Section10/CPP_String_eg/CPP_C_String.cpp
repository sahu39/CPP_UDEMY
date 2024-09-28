#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char my_name[20];
    
    cout << "Enter your first name" << endl;
    cin >> first_name;
    
    cout << "Enter your last name" << endl;
    cin >> last_name;
    
    
    
    cout << "-----------------------" << endl;
    
    cout << "Hello " << first_name << " has " << strlen(first_name) << " characters" << endl;
    cout << "Hello " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    strcpy(my_name,first_name);
    strcat(my_name," ");
    strcat(my_name,last_name);
    cout << "Your full name is :" << my_name << endl;
    
    char full_name[50];
    ///cout << "Enter your full name:";
    //cin >> full_name;
    
    //cout << "Your full name is:" << full_name << endl;
    
    //Using getline function
    cout << "Enter your full name using getline():";
    cin.getline(full_name,50);
    cout << "\nYour full name is:" << full_name << endl;
    
    
       
    
    return 0;
}