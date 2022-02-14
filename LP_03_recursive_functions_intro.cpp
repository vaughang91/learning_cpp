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
        if (my_num == 0){
            return 1; // this is what gets us out of the recursion, once my_num = 0.. 
        };

        return my_num * factorial_function(my_num -1);  // so if my_num is != 0 then return call factorial again and pass my_num -1     
    }

int main() {
       
    std::cout << factorial_function(8) << std::endl;

keep_window_open();

return 0;

}

