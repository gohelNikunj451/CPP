#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char name[100];
  cout << "Enter the number : ";
  cin >> name;

  char name2[100];
  strcpy(name2, name);
  cout << "Size of String : " << strlen(name) << endl;
  for (int i = 0, j = strlen(name) - 1; i < j; i++, j--)
  {
    char temp = name[i];
    name[i] = name[j];
    name[j] = temp;
  }
  cout << "Reversed Name : " << name;

  if (!strcmp(name, name2))
  {
    cout << endl
         << "String are palindrme";
  }
  else
  {
    cout << endl
         << "String are not palindrome";
  }
  cout << endl
       << "STring 2 : " << name2;
}