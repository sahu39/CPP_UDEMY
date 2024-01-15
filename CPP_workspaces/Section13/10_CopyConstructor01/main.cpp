#include <iostream>
#include <string>
using namespace std;
class Player{
private:
    string name;
    int xp;
    int health;
public:
    Player(string nm="None",int exp_val=0, int health_val=0);
    Player(const Player &source);
    ~Player();
    string get_name(){return name;}
    int get_xp(){return xp;}
    int get_health(){return health;}
    
};
Player::Player(string nm,int exp_val,int health_val)
    :name{nm},xp{exp_val},health{health_val}{
        cout << "Three arg constructor is called" << endl;
}
Player::Player(const Player &source)
    :name{source.name},xp{source.xp},health{source.health}{
        cout << "copy constructor is called for " << source.name << endl;
}
Player::~Player(){
    cout << "Destructor is called for:" << name << endl; 
}
void do_a_copy(Player p1){
    cout << "p1.name:" << p1.get_name() <<endl;
    cout << "p1.xp:" << p1.get_xp() << endl;
    cout << "p1.health:" << p1.get_health() << endl;
}

int main()
{
	Player empty;
    do_a_copy(empty);
    //Player player_object
    return 0;
}
