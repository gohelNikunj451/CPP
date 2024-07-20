#include <iostream>

using namespace std;

int main()
{
    string name = "nikunj";

    cout << "basic name : " << name;

    name.push_back('a'); // add only one charater from last of string

    cout << endl
         << "After push_back : " << name;

    name.pop_back(); // remove only one character from last of string

    cout << endl
         << "After pop_back : " << name;

    name.append(" gohel"); // add whole string in to another string from last

    cout << endl
         << "After Append : " << name;

    string name2 = "gohel " + name; // using + orpretor combination of str

    cout << endl
         << "name 2 : " << name2;

    name.clear(); // remove all character from string , it can do emty string

    cout << endl
         << "After clear() : " << name;

    int x = 123456;
    string numStr = to_string(x); // help in int to str
    cout << endl
         << "NumStr : " << numStr;

    string strNum = "12345"; // help in str to int
    int y = stoi(strNum);
    cout << endl
         << "StrNum : " << y;
}