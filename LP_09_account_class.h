//#pragma once     - seems to throw error on this compiler.. maybe not supported. 

/*
this header file holds the SPECIFICATION of the class,  members and method function names. 
*/

#ifndef _LP_09_ACCOUNT_CLASS_H_ 
#define _LP_09_ACCOUNT_CLASS_H_ 

#include<string>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

    class Bank_Account{
    private: 
       std::string name;
       double balance;

    public: 
       void set_balance(double bal);
       
       void set_account_name (std::string n);

       std::string get_account_name(); 
          
       double get_balance ();
                 
       bool withdraw(double bal);
              
       bool deposit(double bal);

    };
 
#endif 
/*
 void set_balance(double bal){
           balance = bal; 
       }
       void set_account_name (std::string name){
           name = name; 
       } 
       double get_balance (){
           return balance;  
       }             
       bool withdraw(double bal){
           balance += bal; 
           std::cout << "in deposit" << std::endl;
           return 1; 
       }; //a function that takes in a withdraw ammount and returns a bool 1 if successfull 
       
       bool deposit(double bal){
            balance -= bal; 
            std::cout << "in withdraw" << std::endl;  
            return 1;  

    */