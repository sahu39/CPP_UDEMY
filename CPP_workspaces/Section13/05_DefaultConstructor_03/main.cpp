#include <iostream>
#include <string>
using namespace std;

class Player{
private:
    string name;
    int xp;
    int health;
public:
    void set_name(string nam){
        name=nam;
    }
    Player(){
        cout << "No args Constructor is called" << endl;
    }    
    Player(string nam){
        cout << "String arg Constructor is called" << endl;
    }
    Player(string nam,int xpval,int hval){
        cout << "Three arg Constructor is called" << endl;
    }
    ~Player(){
        cout << "Destructor is called for " << name << endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
	
    {
        Player Frank;
        Frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villian("Villian",100,12);
        villian.set_name("Villian");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level_boss",1000,300);
    level_boss->set_name("Level_Boss");
    
    
    
    delete enemy;
    delete level_boss;
}
