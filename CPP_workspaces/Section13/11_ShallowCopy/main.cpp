#include <iostream>
#include <string>
using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int val){*data = val;}
    int get_data_value(){return *data;}
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){                  /////Shallow copy
    cout << "copy constructor :shallow" << endl;
}

Shallow::~Shallow(){
    delete data;
    cout <<"Destructor Freeing Data" << endl;
}
void display_shallow(Shallow s1){
    cout << s1.get_data_value() << endl;
}
int main(){
    Shallow obj1 {100};
    display_shallow(obj1);
    //After display_shallow obj1's data  is released as destructor got called
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}