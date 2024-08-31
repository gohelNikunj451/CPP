#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter the number : ";
    getline(cin, name);

    int i = 0;
    int j = name.length();

    while (i < j)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;

        i++;
        j--;
    }

    cout << endl
         << "Half reversed Name : " << name;
}