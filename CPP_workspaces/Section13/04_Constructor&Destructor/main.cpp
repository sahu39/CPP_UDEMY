//Constructor&Destructor
#include <iostream>
#include <string>
using namespace std;
class Player{
private:
    string name;
    int age;
    int xp;
public:
    //Overloading Constructors
    Player(){
        cout << "No-args constructors" << endl;
    }
    Player(string nam){
        name = nam;
        cout << "one-arg constructors" << endl;
    }
    Player(string nam,int x,int y){
        name = nam;
        age = x;
        xp = y;
        cout << "Three-arg constructors" << endl;
    }
    ~Player(){
        cout << "Destructor called for:" << name << endl;
    }
    
};  
int main(){
    {
    Player Frank;
    
    }
    {
        Player Hero;
        Player Jim("Jim");
        Player evil("Evil",28,100);
    }
    Player *enemy = new Player;
    delete enemy;
    
    Player *Friend = new Player("Friend",23,120);
    delete Friend;
}  
