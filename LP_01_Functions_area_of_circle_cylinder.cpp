#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }

//remember your main() must read in the function definitions or function header files before the main() begins. 


// this program will first ask the radius or diameter of a circle, then find the area of a circle. find the area of the cylinder.

double find_area_of_circle(double radius){
    double pi = M_PI;  //M_PI is pi 3.145.
    double area_of_circle = pi * radius * radius;
return area_of_circle; 
}

double find_volume_of_cylinder(double radius, double height){

    double area_of_circle = find_area_of_circle(radius);      //using a function inside of a function. 
    double volume_of_circle = area_of_circle * height;
return volume_of_circle;
}


int main()
{  
    double input = 0;
    std::cout << "enter radius of circle in mm\n";
    std::cin >> input; 
          
    std::cout << "Area of circle with radius of: " << input << " = " << find_area_of_circle(input) << std::endl;

    double cinput_height = 0;
    std::cout << "enter height of cylinder in mm\n";
    std::cin >> cinput_height; 

    std::cout << "volume of cylinder with height of: " << input << " = " << find_volume_of_cylinder(input, cinput_height) << std::endl;

    
    
    
    std::cout << "end of program, press any key to exit..\n";
    keep_window_open();

return 0;
} 