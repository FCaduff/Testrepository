#include <iostream>
#include <string>
using namespace std;

// Branch for the test with Simon
int main ()
{
    string str;
    do {
        cout << "Enter: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
        cout << "I repeat: " << str << '\n';
    } while (str != "goodbye");
}
