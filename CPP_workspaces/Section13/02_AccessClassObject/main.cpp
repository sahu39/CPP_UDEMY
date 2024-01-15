#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
class Player{
public:
    string name {"player"};
    int health {100};
    int xp {3};
    
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};

class Account{
public:
    string name {"Account"};
    double balance {0.0};
    
    void deposit(double bal) {balance += bal; cout << "\nin deposit:" << balance << endl;}
    void withdraw(double bal)  {balance -= bal; cout << "\nAfter withdraw balance:" << balance << endl;}
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank";
    frank_account.balance = 5000;
    
    frank_account.deposit(1000);
    frank_account.withdraw(500);
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hello there");
    
    Player *enemy = new Player;
    (*enemy).name = "enemy";
    (*enemy).health = 192;
    enemy->xp = 12;
    enemy->talk("what's up?");
    
    
    
	return 0;
}
