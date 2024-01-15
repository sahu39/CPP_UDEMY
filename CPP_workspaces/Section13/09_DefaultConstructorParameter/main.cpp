#include <iostream>
#include <string>
using namespace std;
class Player{
private:
    string name;
    int xp;
    int health;
public:
    Player(string nam="None",int xp_val=0,int health_val=0);
    ~Player();
};

Player::Player(string nam,int xp_val,int health_val)
    :name{nam},xp{xp_val},health{health_val}{
        cout << "Three args constructor is called" << endl;
}
Player::~Player(){
    cout << "Destructor is called for " << name << endl;
}

int main()
{
	Player empty;
    Player Frank("Frank");
    Player Villian("Villian",10,100);
    Player Hero("Hero",20);
	return 0;
}
