#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include"LP_09_account_class.h"  //NEVER INCLUDE .cpp FILES!   ONLY .h FILES  !!!!!!!!!!!!!!!!!!


inline void keep_window_open() { char ch; std::cin >> ch; }

    class Bank_Account{
    private: 
       //attributes
       std::string name;
       double balance;
 
    public: 
       // you need public methods to access private members in the class object   
       void set_balance(double bal){
           balance = bal; 
       }
       void set_account_name (std::string n){
           name = name; 
       } 
       double get_balance (){
           return balance;  
       }             
       bool withdraw(double ammount){
           std::cout << "in deposit method function" << std::endl;
           
           if(balance-ammount >= 0){      //verify enough funds availble
               balance -= ammount; 
               return true; 
           }else{ 
               return false; 
           }
       }; //a function that takes in a withdraw ammount and returns a bool 1 if successfull 
       
       bool deposit(double ammount){
            balance += ammount; 
            std::cout << "in withdraw" << std::endl;  
            return 1;  
       };             
    };



int main() {
    //



    Bank_Account vaughan_gittel_account;
    vaughan_gittel_account.set_account_name("Vaughans Account");
    vaughan_gittel_account.set_balance (5000.00); 

    Bank_Account kaylee_eljed_account;


    vaughan_gittel_account.deposit(1000.00);
    vaughan_gittel_account.withdraw(500.00);

   std::cout << "Vaughans account balance = " << vaughan_gittel_account.get_balance() << std::endl; 
    



keep_window_open();
return 0;
}

