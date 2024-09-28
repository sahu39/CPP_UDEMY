#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main()
{
    string s0;
    string s1{"Apple"};//Apple
    string s2{"Banana"};//Kiwi
    string s3{"Kiwi"};//Kiwi
    string s4{"Apple"};//Apple
    string s5{s1};//Apple
    string s6{s1,0,3};//App
    string s7(10,'X');//XXXXXXXXXX
    char my_name[30] = "Sunil \0 Kumar \0 Sahu";//Sunil
    string str_my_name {my_name};//Sunil
    string str_my_name2 {my_name,30};
    string str_my_name3 (my_name,sizeof(my_name));
    
    cout << s0 << endl;
    cout << s0.length() << endl;
    
    //nInitialization
    cout << "\nInitialization" <<"\n------------------------" << endl;
    cout << "s1 initialized to:" << s1 << endl;
    cout << "s2 initialized to:" << s2 << endl;
    cout << "s3 initialized to:" << s3 << endl;
    cout << "s4 initialized to:" << s4 << endl;
    cout << "s5 initialized to:" << s5 << endl;
    cout << "s6 initialized to:" << s6 << endl;
    cout << "s7 initialized to:" << s7 << endl;
    cout << "my_name initialized to:" << my_name << endl;
    cout << "str_my_name initialized to:" << str_my_name << endl;
    cout << "str_my_name2 initialized to:" << str_my_name2 << endl;
    cout << "str_my_name3 initialized to:" << str_my_name3 << endl;
    
    //length & size
    cout << "\nLength and Size" << "\n---------------------" << endl;
    cout << "s1 length:" << s1.length() << " s1 size:" << s1.size() << endl;
    cout << "s2 length:" << s2.length() << " s2 size:" << s2.size() << endl;
    cout << "s3 length:" << s1.length() << " s3 size:" << s3.size() << endl;
    cout << "s4 length:" << s4.length() << " s4 size:" << s4.size() << endl;
    cout << "s5 length:" << s5.length() << " s5 size:" << s5.size() << endl;
    cout << "s6 length:" << s6.length() << " s6 size:" << s6.size() << endl;
    cout << "s7 length:" << s7.length() << " s7 size:" << s7.size() << endl;
    cout << "my_name length:" << strlen(my_name) << " my_name size:" << sizeof(my_name)<< endl;
    cout << "str_my_name length:" << str_my_name.length() << " str_my_name size:" << str_my_name.size() << endl;
    cout << "str_my_name2 length:" << str_my_name2.length() << " str_my_name2 size:" << str_my_name2.size() << endl;
    cout << "str_my_name3 length:" << str_my_name3.length() << " str_my_name3 size:" << str_my_name3.size() << endl;
    return 0;
}