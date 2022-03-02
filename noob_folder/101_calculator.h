//#pragma once     - seems to throw error on this compiler.. maybe not supported. 

/*
this header file holds the SPECIFICATION of the class,  members and method function names. 
*/

#ifndef _101_CALCULATOR_H_  // an include guard
#define _101_CALCULATOR_H_ 



double add();

double pythagoras();


class Calculator
{
   public:
      double Calculate(double x, char oper, double y);
};

#endif 



