
/*
this header cpp file holdes the IMPLEMENTATION actual function body and links the function to the class using :: scope operator 
tells it which class it is linked to...  Bank_Account::my_method()
*/

#include"LP_09_account_class.h"

    void Bank_Account::set_balance(double bal){
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
    
    bool Bank_Account::withdraw(double bal){
           balance += bal; 
           std::cout << "in deposit" << std::endl;
           return 1; 
       }; //a function that takes in a withdraw ammount and returns a bool 1 if successfull 
       
    bool Bank_Account::deposit(double bal){
            balance -= bal; 
            std::cout << "in withdraw" << std::endl;  
            return 1;  

    };
 

/*
 

    */