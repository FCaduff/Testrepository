#include <iostream>
#include <string>
using namespace std;

// simple command
int main ()
{
    string str;
    do {
        cout << "Enter text: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");
}
