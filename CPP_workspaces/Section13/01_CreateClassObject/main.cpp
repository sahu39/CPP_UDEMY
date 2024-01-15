#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
class Player{
    string name {"player"};
    int health {100};
    int xp {3};
    
    void talk(string);
    bool is_dead();
};

class Account{
    string name {"Account"};
    double balance {0.0};
    
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account Frank_account;
    Account Jim_account;
    
	Player Frank;
    Player Jim;
    Player players [] {Frank,Jim};
    vector <Player> player_vec {Frank};
    player_vec.push_back(Jim);
    Player *hero {nullptr};
    hero = new Player;
    delete hero;
    
    
	return 0;
}
