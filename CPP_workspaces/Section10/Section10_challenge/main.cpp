#include <iostream>
#include <string>
using namespace std;
int main()
{
	string alphabets {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string keys      {"123456789opiu>ytrewqasdfghjklm,.nbvcxzASDFGLJIOPUYHB"};
    
    string mystring;
    string encrypted_message;
    string decrypted_message;
    size_t index {};
    
    cout << "Enter your Secret message:";
    getline(cin,mystring);
    for (auto ch : mystring){
        index = alphabets.find(ch);
        //cout << "index:" << index << endl;
        if(index != string::npos)
            encrypted_message += keys.at(index);
        else
            encrypted_message += ch;
    }
    cout << "encrypted_message:" << encrypted_message << endl;
    for (auto ch : encrypted_message){
        index = keys.find(ch);
        cout << "index:" << index << endl;
        if(index != string::npos){
            decrypted_message += alphabets.at(index);
        }
        else
            decrypted_message += ch;
            
    }
    cout << "decrypted_message:" << decrypted_message << endl;
    cout << keys.length() << " " << alphabets.length() << endl;
	return 0;
}
