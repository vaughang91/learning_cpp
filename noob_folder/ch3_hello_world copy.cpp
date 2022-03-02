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
    std::cout << "Hello, World!\n";
    keep_window_open();

return 0;
} 