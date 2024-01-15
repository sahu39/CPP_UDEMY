#include <iostream>
#include <string>
class Player{
private:
    std::string name;
    int xp;
    int health;
public:
    std::string get_name() const{
        return name;
    }
    void set_name(std::string name){
        this->name = name;
    }
    //Overloading Constructor
    Player();
    Player(std::string name,int xp,int health);
    Player(const Player &p);
};
Player::Player(){
    std::cout << "no-arg constructor" << std::endl;
}
Player::Player(std::string name,int xp,int health){
    this->name =  name;
    this->xp = xp;
    this->health = health;
};
Player::Player(const Player &p){
    std::cout << "copy constructor" << std::endl;
}
void display_player(const Player &p){
    std::cout << p.get_name() << std::endl;
}
int main()
{
    const Player villian {"villian",0,100};
    Player Hero {"Hero",100,100};
    display_player(villian);
    
	std::cout << "My Template" << std::endl;
	return 0;
}
