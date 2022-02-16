#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }

    class Bank_Account{
       //attributes
       std::string name;
       double ballance = 0;

       //methods (fucntions in the class)
       bool withdraw(double amount); //a function that takes in a withdraw ammount and returns a bool 1 if successfull 
       bool deposit(double amount);             
    };
    
int main() {
    //



    Bank_Account vaughan_gittel_account;
    Bank_Account kaylee_eljed_account;


    int my_num = 69;
    std::cout << "value of my_num: " << my_num << std::endl;
    std::cout << "sizeof bytes my_num: " << sizeof my_num << std::endl;
    std::cout << "memory HEX address of my_num: " << &my_num << std::endl << std::endl;

    int &my_num_reference = my_num; 
    std::cout << "my_num_reference: " << my_num_reference << std::endl << std::endl;

    std::vector<std::string> stooges {"larry", "moe", "curly"}; 



keep_window_open();
return 0;
}

