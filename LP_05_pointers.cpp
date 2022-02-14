#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
inline void keep_window_open() { char ch; std::cin >> ch; }


int main() {
    //ALWAYS initialise pointer variables with "nullptr"   - IF NOT IT WILL POINT TO SOMEWHERE RANDOM. 
 
    int my_num = 69;
    std::cout << "value of my_num: " << my_num << std::endl;
    std::cout << "sizeof bytes my_num: " << sizeof my_num << std::endl;
    std::cout << "memory HEX address of my_num: " << &my_num << std::endl << std::endl;

    int *my_num_pointer = nullptr; 
    std::cout << "memory address stored my_num_num_pointer: " << my_num_pointer << std::endl;
    std::cout << "value of my_num_num_pointer: " << "Dereferencing when NULL = *my_num_pointer WILL SEGMENTATION FAULT when it is NULL...." << std::endl; //*my_num_pointer is the dereferenced value or the value stored at that memory address. 
    std::cout << "sizeof bytes my_num_num_pointer: " << sizeof my_num_pointer << std::endl;  
    std::cout << "memory HEX address of my_num_num_pointer: " << &my_num_pointer << std::endl << std::endl;
        
    my_num_pointer = &my_num; 
    std::cout << "memory address stored my_num_num_pointer: " << my_num_pointer << std::endl;
    std::cout << "value of my_num_num_pointer: " << *my_num_pointer << std::endl; 
    std::cout << "sizeof bytes my_num_num_pointer: " << sizeof my_num_pointer << std::endl; 
    std::cout << "memory HEX address of my_num_num_pointer: " << &my_num_pointer << std::endl << std::endl;   

    


keep_window_open();
return 0;
}

