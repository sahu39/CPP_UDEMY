#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    string name;
    int xp;
    int health;
public:
    Player();
    Player(string nam);
    Player(string nam,int exp_val,int health_val);
    ~Player();
};
Player::Player()
    :Player{"none",0,0}{
    cout << "no-args constructor is called" << endl;
}
Player::Player(string nam)
    :Player{nam,0,0}{
    cout << "one arg constructor is called" << endl;
}
Player::Player(string nam,int exp_val,int health_val)
    :name{nam},xp{exp_val},health{health_val}{
    cout << "three args constructor is called" << endl;
}
Player::~Player(){
    cout << "Destructor is called" << endl;
}
int main()
{
	Player player1;
    Player player2("player2");
    Player player3("player3",10,100);
	return 0;
}
