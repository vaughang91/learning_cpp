#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }
//using namespace std;

/* recursionn is the act of a function calling itself. 
  classic example: 
                      0! = 1
                      n! = n * (n-1)!
    Base Case: is what 
            factorial(0) = 1

    Recursive Case: factorial(n) = n * factorial(n-1)       // this is the factorial calling itself.  
*/

    unsigned long long factorial_function(unsigned long long my_num){
        if (my_num <= 1){
            return my_num; // this is what gets us out of the recursion, once my_num = 0.. 
        };
        //std::cout << my_num << std::endl;
        return factorial_function(my_num -1) + factorial_function(my_num -2);  // so if my_num is != 0 then return call factorial again and pass my_num -1     
    }

int main() {
       
    
    int fibonacci_num = 3; 
    int depth = 0; 


    std::cout << "how deep do you want to go?: " << std::endl;
    std::cin >> depth; 


    while(fibonacci_num != (depth +1)){
    
    std::cout << "fibonacci_num: " << fibonacci_num << "= " << factorial_function(fibonacci_num) << std::endl;
    fibonacci_num ++; 
    
    }


keep_window_open();

return 0;

}

