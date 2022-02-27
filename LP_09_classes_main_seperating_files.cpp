// THIS IS THE MAIN.cpp FILE - the entry point into the program for the compiler and linker

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include"LP_09_account_class.h"  //NEVER INCLUDE .cpp FILES!   ONLY .h FILES  !!!!!!!!!!!!!!!!!!


inline void keep_window_open() { char ch; std::cin >> ch; }

int main() {
    //
    double user_input = 0; 



    std::cout << "set balance = " << std::endl; 
    std::cin >> user_input; 

/*

    Bank_Account vaughan_gittel_account;
    vaughan_gittel_account.set_account_name("Vaughans Account");
    vaughan_gittel_account.set_balance (user_input); 

    Bank_Account kaylee_eljed_account;


    vaughan_gittel_account.deposit(1000.00);
    if(vaughan_gittel_account.withdraw(7000.00)){
         std::cout << "done" << std::endl;
       }else{ 
         std::cout << "not done" << std::endl;
         return false; 
           };


   std::cout << "Vaughans account balance = " << vaughan_gittel_account.get_balance() << std::endl; 
    */



keep_window_open();
return 0;
}

