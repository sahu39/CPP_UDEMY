#include <iostream>
#include <string>
class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string nam){
        name = nam;
    }
    std::string get_name(){
        return name;
    }
    Player(){
        name = "None";
        health = 100;
        xp = 3;
    }
};
int main()
{
	Player Frank;
    Frank.set_name("Frank");
    std::cout << Frank.get_name() << std::endl;
	return 0;
}
