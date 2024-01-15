#include <iostream>
#include "player.h"

void display_active_player(){
    //Directly call the static class method to get the no. of Players.
    std::cout << "Active Players:" << Player::get_player_numbers() << std::endl;
}

int main()
{
    
    display_active_player();
    Player Sunil;
	display_active_player();
    {
        Player Frank;
        display_active_player();
    }
    display_active_player();
    Player *Enemy = new Player("Enemy",100,100);
    display_active_player();
    delete Enemy;
    display_active_player();
	return 0;
}
