#include <iostream>
#include <vector>
#include <string>
using namespace std;
void display(const vector <string> *const v);
void display(int *array,int sentinal);
int main()
{
	vector <string> names {"Larry","Marry","Curly"};
    display(&names);
    int num_array [] {100,86,77,54,90,-1};
    cout << "--------------------------------" << endl;
    display(num_array,-1);
	return 0;
}
void display(const vector <string> *const v){
    //*v.at(0) = "Jerry";//error:request for member 'at' in 'v', which is of pointer type const.....
    for(auto str: *v)
        cout << str << " ";
    cout << endl;
    //v = nullptr;//error: assignment of read-only parametr 'v'
}
void display(int *array,int sentinal){
    while (*array != sentinal)
        cout << *array++ << endl;
}
