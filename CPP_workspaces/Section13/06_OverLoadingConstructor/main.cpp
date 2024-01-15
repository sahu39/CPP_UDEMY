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
    Player(string nm,int exp_val,int health);
    ~Player();
};
Player::Player(){
    name = "none";
    xp = 0;
    health = 0;
}
Player::Player(string nam){
    name = nam;
    xp = 0;
    health = 0;
}
Player::Player(string nm,int exp_val,int health_val){
    name = nm;
    xp = exp_val;
    health = health_val;
}
Player::~Player(){
    cout << "Destructor for " << name << "is called" << endl;
}
int main()
{
	Player player1;
    Player player2("swagat");
    Player player3("Sunil",5,100);
    
    Player *player4 = new Player();
    Player *player5 = new Player("player5");
    Player *player6 = new Player("player6",6,100);
    
    delete(player4);
    delete(player5);
    delete(player6);
	return 0;
}
