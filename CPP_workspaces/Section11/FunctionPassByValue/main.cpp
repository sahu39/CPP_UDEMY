#include <iostream>
#include <vector>
#include <string>
using namespace std;
void pass_by_ref1(int &n);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string> &v);
void pass_by_ref4(const vector <string> &v);
void print_vector(vector <string> &v);
int main()
{
	int num {10};
    int another_num {20};
    
    cout << "num before pass_by_ref1:" << num << endl;
    pass_by_ref1(num);
    cout << "num after pass_by_ref1:" << num << endl;
    
    cout << "num before pass_by_ref1:" << another_num << endl;
    pass_by_ref1(another_num);
    cout << "num after pass_by_ref1:" << another_num << endl;
    
    string name {"Batista"};
    cout << "name before pass_by_ref2:" << name << endl;
    pass_by_ref2(name);
    cout << "name after pass_by_ref2:" << name << endl;
    
    vector <string> mywrestler {"John cena", "Undertaker", "Batista"};
    cout << "vector string data before pass_by_ref3:"  << endl;
    print_vector(mywrestler);
    pass_by_ref3(mywrestler);
    cout << "vector string data after pass_by_ref3:"  << endl;
    print_vector(mywrestler);
	return 0;
}
void pass_by_ref1(int &n){
    n = 1000;
}
void pass_by_ref2(string &s){
    s = "cleared";
}
void pass_by_ref3(vector <string> &v){
    v.clear();
}
void pass_by_ref4(const vector <string> &v){
    for(auto ch : v)
        cout << ch << " ";
    cout << endl;
}
void print_vector(vector <string> &v){
    for(auto ch : v)
        cout << ch << " ";
    cout << endl;
}