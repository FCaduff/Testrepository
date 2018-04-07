#include <iostream>
#include <string>
using namespace std;
// Does git status see that?

// simple comment
int main ()
{
    string str; //Comment from master
    do {
        cout << "Enter: ";
        //Changed in remote
        getline (cin,str);
        cout << "You entered: " << str << '\n';
        // Changed in local
        cout << "I repeat: " << str << '\n';
        // Another comment
    } while (str != "goodbye");
    // Just for verifying
}
