//#pragma once     - seems to throw error on this compiler.. maybe not supported. 

/*
this header file holds the SPECIFICATION/ DEFINITIONS of the classes,  members and method function names. 
*/

#ifndef _LP_09_ACCOUNT_CLASS_H_ 
#define _LP_09_ACCOUNT_CLASS_H_ 



    class Bank_Account{
        private: 
            std::string name;
            double balance;

        public: 
            // CONSTRUCTOR INITIALISATION =  this way is ok....
                                            //Bank_Account();
                                            //Bank_Account(std::string name_val);
                                            //Bank_Account(std::string name_val, double bal_val);
            //this way is best 
            //Bank_Account(); //setting default values for intialisation
            Bank_Account(std::string name_val = "none", double balance_val = 0); //setting default values for intialisation
            //COPY CONSTRUCTOR DECLARATION
            Bank_Account(const Bank_Account &source);
             //DESTUCTOR DECLARATION
            ~Bank_Account();

            //METHOD FUNCTIONS 
            void set_balance(double bal);    
            void set_account_name (std::string n);
            std::string get_account_name();                
            double get_balance ();                        
            bool withdraw(double bal);                   
            bool deposit(double bal);
    };
 
#endif 
