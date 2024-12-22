#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};
void inFromStart(Node *&Head, int d)
{
  if (Head == NULL)
  {
    Head = new Node(d);
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = Head;
    Head = temp;
  }
}
void printNode(Node *&Head)
{
  Node *temp = Head;
  cout << endl
       << "Data : ";
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
bool checkPalaindrom(Node *&Head)
{
  Node *temp = Head;
  int count = 0;
  while (temp)
  {
    count++;
    temp = temp->next;
  }
  cout << endl
       << "The lenght of NodeLIst : " << count;
}
int main()
{
  Node *Head = NULL;
  for (int i = 1; i <= 3; i++)
  {
    inFromStart(Head, i);
  }
  for (int i = 3; i >= 0; i--)
  {
    inFromStart(Head, i);
  }
  printNode(Head);
  if (checkPalaindrom(Head))
  {
    cout << endl;
    cout << "NodeList is PalainDrom";
  }
  else
  {
    cout << endl;
    cout << "NodeList is not PalainDrom";
  }
}