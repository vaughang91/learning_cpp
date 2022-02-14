/* C++ also allows for enumerated constants. This means the programmer can create a new variable type and then assign a finite number of values to it. Here is the form of the enum keyword:

            enum type_name {
            value1,
            value2,
            value3,
            .
            .
            } object_names;

For example:

        enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

In this example the enum variable MONTH has twelve possible values. These 12 values translate into 12 integer values.

 Jan = 0
 Feb = 1
 etc.

*/ 

#include <iostream>  

using namespace std; 

int main(){

   //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    } 

return 0;
}
