#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter the name : ";
    getline(cin, name);
    cout << endl
         << "your name : ";
    cout << name;

    // lenght of str
    cout << endl
         << "Length of String : " << name.length(); // we can also use name.size();

    // null character

    cout << endl
         << name[name.length()];

    char null = '\0';
    cout << "null character : " << (int)null; // ACII value of '\0' is 0
}