#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
#if 0
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
#endif    
    char full_name[20];
    char temp[20]{};
    ///cout << "Enter your full name:";
    //cin >> full_name;
    
    //cout << "Your full name is:" << full_name << endl;
    
    //Using getline function
    cout << "Enter your full name using getline():";
    cin.getline(full_name,50);
    cout << "\nYour full name is:" << full_name << endl;
    
    cout << "-------------------------------------" << endl;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name) == 0)
    {
        cout << "both " << full_name << " and " << temp << " are equal" << endl;
    }
    else
    {
        cout << "both " << full_name << " and " << temp << " are not equal" << endl;
    }
    cout << "-----------------------" << endl;
    
    for(size_t t{0};t<strlen(full_name);t++)
    {
        if(isalpha(full_name[t]))
            full_name[t] = toupper(full_name[t]);
    }
    
    if(strcmp(temp,full_name) == 0)
    {
        cout << "both " << full_name << " and " << temp << " are equal" << endl;
    }
    else
    {
        cout << "both " << full_name << " and " << temp << " are not equal" << endl;
    }
    cout << "-----------------------" << endl;   
    cout << "Result of comparing " << temp << " and " << full_name << " is:" << strcmp(temp,full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << " is:" << strcmp(full_name,temp) << endl;
    
       
    
    return 0;
}