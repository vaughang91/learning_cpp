#include <iostream>

using namespace std; 

int main(){    //   "\n"  or    endl   can be used for a new line in most cases they will both work.. most cases... 

    cout <<"int size = "<<sizeof(int)<<"\n";
    cout <<"char size = "<<sizeof(char)<<"\n";
    cout <<"bool size = "<<sizeof(bool)<<"\n";
    cout <<"floating point size = "<<sizeof(float)<<"\n";
    cout <<"double floating point size = "<<sizeof(double)<<"\n";
    cout <<"wide char size = "<<sizeof(wchar_t)<<"\n\n";

    cout << "Size of char : " << sizeof(char)
      << " byte" << endl;
    cout << "Size of int : " << sizeof(int)
      << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int)
      << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int)
       << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int)
       << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int)
       << " bytes" << endl;
    cout << "Size of float : " << sizeof(float)
       << " bytes" <<endl;
    cout << "Size of double : " << sizeof(double)
       << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t)
       << " bytes" <<endl;

       return 0;
}