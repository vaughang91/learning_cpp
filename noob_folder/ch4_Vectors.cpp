//#include "std_lib_facilities.h" 
/*"std_lib_facilities.h" from textbook... The “../../” tells the compiler that you placed the header in 
C:\Documents and Settings\Your Name\My Documents\Visual Studio 2005\Projects where it can be used by all of your projects, 
rather than right next to your source file in a project where you would have to copy it for each project. */


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }
//using namespace std;   im going to try use the harder way


int main()
{  
    int console_input; 
    std::vector <int> myVector; 
    std::cout << "enter a number\n";

    while(std::cin >> console_input){

        myVector.push_back(console_input);
        //std::cout << "number entered: " << myVector[myVector.size()-1] << "\n";
        //std::cout << "myVector Size: " << myVector.size() << "\n";
        
    }

    int vectorIndex = 0;
    for(int x : myVector){ // this is a range-based for loop.  gives the easy ability to loop througha collection in a vector. 
        std::cout << "vectorIndex:" << vectorIndex << " = " << x << "\n"; //print out each element in vector
        vectorIndex++; 
    }
    
    std::cout << "\nbegin sorting.... \n";
    std::sort(myVector.begin(), myVector.end());  // this will sort the vector from smallest to biggest. 

    vectorIndex = 0;
        for(int x : myVector){   // this is a range-based for loop. 
            
            std::cout << "vectorIndex:" << vectorIndex << " = " << x << "\n"; //print out each element in vector
            vectorIndex++; 
        } 

    std::cout << "the smallest value is:" << myVector.at(0) << "\n"; //print the first element in the vector. 
    std::cout << "the largest value is:" << myVector.at(myVector.size()-1) << "\n"; // print the last element in the vector


    std::cout << "end of program, press any key to exit..\n";
    keep_window_open();

return 0;
} 