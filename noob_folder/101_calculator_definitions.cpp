/*
this header cpp file holdes the IMPLEMENTATION actual function body and links the function to the class using :: scope operator 
tells it which class it is linked to...  Bank_Account::my_method()
*/
#include<string>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#include"101_calculator.h"

    double add(){
        double a = 0;
        double b = 0;
        double answer = 0; 
        std::cout << "Enter first number:" <<  std::endl; 
        std::cin >> a;
        std::cout << "Enter second number:" <<  std::endl; 
        std::cin >> b;
        answer = a + b;

        std::cout << "answer = " << answer << std::endl << std::endl; 
        

        return 1;
    };
   
    double pythagoras(){
        float a;
        float b;
        float c;

        std::cout << "Enter a value for a: ";
        std::cin >> a;

        std::cout << "Enter a value for b: ";
        std::cin >> b;

        float a2 = pow(a, 2);
        float b2 = pow(b, 2);
        c = sqrt(a2 + b2);

        std::cout << "Hypotenuse: " << c << std::endl;
        return 1;
    }
 

double Calculator::Calculate(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
} 


/*
 
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
    */