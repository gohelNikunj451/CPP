#include <iostream>
using namespace std;
class Node
{
  int data;
  Node *next;
};

int main()
{
  Node *Head;
  cout << Head << endl;
  cout << &Head << endl;
  cout << *&Head << endl;
}