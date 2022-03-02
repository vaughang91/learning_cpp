#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }
//using namespace std;


//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

std::string print_guest_list(const std::string&,  const std::string &,  const std::string &);// this means pass a variable of const std::string type of its memory address 
void clear_guest_list(std::string &,std::string &,std::string &);// pass a std::string type my memomry address location




int main() {
       
        std::string guest_1 {"Larry"};
        std::string guest_2 {"Moe"};
        std::string guest_3 {"Curly"};
        
        print_guest_list(guest_1, guest_2, guest_3);
        clear_guest_list(guest_1, guest_2, guest_3);
        print_guest_list(guest_1, guest_2, guest_3);


keep_window_open();

return 0;

}


std::string print_guest_list(const std::string &param_guest_1, const std::string &param_guest_2, const std::string &param_guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    std::cout << param_guest_1 << "\n" << param_guest_2 << "\n" << param_guest_3 << std::endl;

    std::string test_1 = typeid(param_guest_1).name();
    std::string test_2 = typeid(param_guest_2).name();
    std::string test_3 = typeid(param_guest_3).name();
    return test_1 + test_2 + test_3;
}


void clear_guest_list(std::string &Parameter_guest_1,std::string &Parameter_guest_2,std::string &Parameter_guest_3) {
    
    Parameter_guest_1 = Parameter_guest_2 = Parameter_guest_3 = "null/cleared";
   
}

