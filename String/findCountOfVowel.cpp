#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter the name: ";
    getline(cin, name);

    cout << "Name : " << name;
    int count = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' or name[i] == 'A' or name[i] == 'e' or name[i] == 'E' or name[i] == 'o' or name[i] == 'O' or name[i] == 'u' or name[i] == 'U' or name[i] == 'a' or name[i] == 'i' or name[i] == 'I')
        {
            count++;
        }
    }
    cout << endl
         << "vowel count is : " << count;
}