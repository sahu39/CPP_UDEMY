#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int val){*data = val;}
    int get_data_value(){return *data;};
    Move(int); //constructor
    Move(const Move &source); //copy constructor
    Move(Move &&source);
    ~Move(); //Destructor
    
};
Move::Move(int d){
    data = new int;
    *data = d;
    cout << "Constructor for:" << d << endl;
}

Move::Move(const Move &source)
    :Move(*source.data){
        cout << "Copy constructor:Deep copy for:" << *data << endl;
}
Move::Move(Move &&source)
    :data(source.data){
    source.data = nullptr;
    cout << "Move constructor-moving resource:" << *data << endl;
}
Move::~Move(){
    if(data != nullptr)
        cout << "Destructor freeing data for:" << *data << endl;
    else
        cout << "Destructor freeing data for nullptr" << endl;
    delete data;
}
int main()
{
    vector<Move> vec;
    vec.push_back(Move{10});
    
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
	
	return 0;
}
