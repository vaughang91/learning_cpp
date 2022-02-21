#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }

    class Player{
    //attributes
    public:   //needs to be stated when using classes to view outside of the class
        std::string name = "undefined name";
        int health = 100;
        int xp = 1;
        
    //methods (fucntions in the class)
        
        void talk(std::string text_to_say)
            {
                std::cout << name << "says " << text_to_say << std::endl;
            }

        bool is_dead();   

    };
    
int main() {
    //

    Player vaughan;
   
    std::cout << "" << vaughan.name << std::endl;
    vaughan.name = "Vaughan Gittel";
    std::cout << "" << vaughan.name << "\t" << std::endl;
    vaughan.talk("hey fuck face");


    Player hero; 
       // hero.name = "Hero"; 

//create an object on the heap with a pointer address. 
    Player *enemy {nullptr};
    enemy = new Player; 
    delete enemy; 

//make a array (or type 'CLASS') of players 
    Player players[]{vaughan, hero};

//create a vector of player objects 
    std::vector<Player> player_vect{}; 
    player_vect.push_back(vaughan); //add into vector player named vaughan
    player_vect.push_back(hero); //add into vector player named hero




   
keep_window_open();
return 0;
}

