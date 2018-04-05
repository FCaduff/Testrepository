#include <iostream>
#include <string>
using namespace std;

// simple comment
int main ()
{
    string str;
    do {
        cout << "Enter text: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
        cout << "I repeat: " << str << '\n';
        // Another comment
    } while (str != "goodbye");
    // Just for verifying
}
