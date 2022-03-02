#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }


int main() {
    //
 
    int my_num = 69;
    std::cout << "value of my_num: " << my_num << std::endl;
    std::cout << "sizeof bytes my_num: " << sizeof my_num << std::endl;
    std::cout << "memory HEX address of my_num: " << &my_num << std::endl << std::endl;

    int &my_num_reference = my_num; 
    std::cout << "my_num_reference: " << my_num_reference << std::endl << std::endl;

    std::vector<std::string> stooges {"larry", "moe", "curly"}; 


    for(std::string stooge : stooges){
        std::cout << "" << stooge << "\t";  // PRINT OUT VECTOR
    }

    std::cout << std::endl ; 

    for(std::string stooge : stooges){  //CHANGE VECTOR IN FUNCTION WITHOUT THE & REFERENCER 
        stooge = "No &";
    }

    std::cout << std::endl;

    for(std::string stooge : stooges){
        std::cout << "" << stooge << "\t";
    }

    std::cout << std::endl;

    for(std::string &stooge : stooges){  //CHANGE VECTOR IN FUNCTION WITH THE & REFERENCER
        stooge = "With &";
    }

    std::cout << std::endl;
    
    for(std::string stooge : stooges){
        std::cout << "" << stooge << "\t";
    }


keep_window_open();
return 0;
}

