#include <iostream>
#include <vector>
#include <string>

using namespace std; //this is to remove the need to use " std:: " before every " cout " 
                      // becareful when commands are not explicitly defined, ther eis a possibility if your code
                       //is added to a bigger library it may reference a command from a different library... 

int main()
{
    vector<string> msg {"2 Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}







