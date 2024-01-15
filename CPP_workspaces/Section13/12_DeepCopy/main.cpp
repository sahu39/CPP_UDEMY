#include <iostream>
using namespace std;

class Deep{
private:
    int *data;
public:
    void set_data_value(int val){*data = val;}
    int get_data_value(){return *data;}
    Deep(int);
    Deep(const Deep &);
    ~Deep();
};
Deep::Deep(int d){
    data = new int;
    *data = d;
}
/*
Deep::Deep(const Deep &source){
    data =  new int;
    *data = *source.data;//Data pointed by source's data pointer
    cout << "copy constructor is getting called" << endl;
}*/

//We can use delegating of the Deep constructor in copy constructor
Deep::Deep(const Deep &source)
  :Deep(*source.data){         //Delegating Constructor
    cout << "copy constructor is getting called" << endl;
}
Deep::~Deep(){
    delete data;
    cout << "Destructor destroying pointer" << endl;
}

void display_deep(Deep p){
    cout << p.get_data_value() << endl;
}
int main()
{
	Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    
	return 0;
}
