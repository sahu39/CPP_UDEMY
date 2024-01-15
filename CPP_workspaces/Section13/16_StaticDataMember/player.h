#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player{
private:
    static int num_players;//static data member excessed only by static method
    std::string name;
    int xp;
    int health;
public:
    std::string get_name(){return name;}
    int get_xp(){return xp;}
    int get_health(){return health;}
    //3 args constructor with Default parameters
    Player(std::string name_val = "None", int exp_val = 0, int health = 0);
    //Copy Constructor
    Player(const Player &source);
    //Destructor
    ~Player();
    static int get_player_numbers();
};
#endif//_PLAYER_H_
