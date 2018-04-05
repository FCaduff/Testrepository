#include <iostream>
#include <string>
using namespace std;

// simple command
int main ()
{
    string str; //Comment from master
    do {
        cout << "Enter text: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");
}
