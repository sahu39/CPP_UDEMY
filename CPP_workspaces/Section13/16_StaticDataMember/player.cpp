#include "player.h"

//Initialize static variable
int Player::num_players {0};


//3 args constructor with default parameters
Player::Player(std::string nam_val,int xp_val,int health_val)
        :name{nam_val},xp{xp_val},health{health_val}{
            //Increment No. of Playes
            ++num_players;
}
//copy constructor
Player::Player(const Player &source)
        :Player(source.name,source.xp,source.health){
}

Player::~Player(){
    --num_players;
}

//Returning Number of Players
int Player::get_player_numbers(){
    return num_players;
}