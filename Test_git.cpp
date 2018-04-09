#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;
    // Some changes
    do {
        cout << "Enter: ";
        getline (cin,str);
        // More changes
        cout << "You entered: " << str << '\n';
        cout << "I repeat: " << str << '\n';
    } while (str != "goodbye");
}
