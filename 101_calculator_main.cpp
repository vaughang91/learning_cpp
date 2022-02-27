#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


#include"101_calculator.h"  //NEVER INCLUDE .cpp FILES!   ONLY .h FILES  !!!!!!!!!!!!!!!!!!



   
int main() {
    //
    int user_input = 0; 
    double answer = 0;

    //for the class
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    Calculator calc; 



    do{
    std::cout << " Select a menu option by Entering a number..." << std::endl << std::endl; 
    std::cout << "0 = exit"  
    << std::endl << "1 = add" 
    << std::endl << "2 = Pythagoras"
    << std::endl << "3 = Class"
    << std::endl; 
    
    std::cin >> user_input;

    switch (user_input)
    {
    case 1:
        add();
        
        break;

    case 2:
        pythagoras();
        break;

     case 3:
        
        
        std::cin  >> x  >> oper  >> y;
        if (oper == '/' && y == 0)
        {
            std::cout << "Division by 0 exception" << std::endl;
            continue;
        }
        else
        {
            result = calc.Calculate(x, oper, y);
            std::cout << "Result is: " << result << std::endl;
        }

            return 0;

        break;
        


    default:
        break;
    }

    } while(user_input != 0); 
    
    
    

   std::cout << "exit" << std::endl; 
    




return 0;
}