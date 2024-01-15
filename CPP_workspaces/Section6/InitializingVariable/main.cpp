#include <iostream>
using namespace std;
int main()
{
//nt age {21};//Initializing variables
//out << "age " << age << endl;
    int room_width {0};
    int room_height {0};
    
    cout << "Enter room width:";
    cin >> room_width;
    
    cout << "Enter room height:";
    cin >> room_height;
    
    cout << "The area of the room is:" << room_height * room_width << " square feet" << endl;
    
    
     int age {0};
    double hourly_wage {23.50};
    string name;
    cout << "age:";
    cin >> age;
    cout << "name:";
    cin >> name;
    
    cout << name << " " << age << " " << hourly_wage;
    
    
    return 0;
}
