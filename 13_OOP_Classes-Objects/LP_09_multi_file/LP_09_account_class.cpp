
/*
TO DEFINE A METHOD FUNCTION OUTSIDE OF THE CLASS using "::" 
this header cpp file holdes the IMPLEMENTATION actual function body and links the function to the class using :: scope operator 
tells it which class it is linked to...  Bank_Account::my_method()    
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include"LP_09_account_class.h"  //NEVER INCLUDE .cpp FILES!   ONLY .h FILES  !!!!!!!!!!!!!!!!!!

   
    Bank_Account::Bank_Account(std::string name_val, double balance_val)
        :name(name_val), balance(balance_val){ //setting default values for intialisation
        }

      
    //COPY CONSTRUCTOR
    Bank_Account::Bank_Account(const Bank_Account &source)
        :name(source.name), balance(source.balance){
        }

    //DESTUCTOR
    Bank_Account::~Bank_Account() { std::cout << "Destrcutor called for: " << name << std::endl;}
    
    void Bank_Account::set_balance(double bal){    //here we are defining the set_balance method under the Bank_Account Class
           balance = bal; 
       }

    void Bank_Account::set_account_name (std::string n){
           name = n; 
       } 

    std::string Bank_Account::get_account_name(){
            return name; 
    };

    double Bank_Account::get_balance (){
           return balance;  
       }             
    
    bool Bank_Account::withdraw(double ammount){
          if(balance-ammount >= 0){      //verify enough funds availble
               balance -= ammount; 
               return true; 
               std::cout << "Deposit succesful" << std::endl;
           }else{ 
                std::cout << "No Funds" << std::endl;
                return false; 
           }
       }; //a function that takes in a withdraw ammount and returns a bool 1 if successfull 
    
    bool Bank_Account::deposit(double ammount){
            balance -= ammount; 
            std::cout << "in withdraw" << std::endl;  
            return 1;  

    };
 

/*
 

    */