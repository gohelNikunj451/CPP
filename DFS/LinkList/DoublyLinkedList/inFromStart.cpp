#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *pre;

  Node(int data)
  {
    this->data = data;
    next = NULL;
    pre = NULL;
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
    Head->pre = temp;
    temp->next = Head;
    Head = temp;
  }
}
void printNode(Node *&Head)
{
  Node *temp = Head;
  cout << endl
       << "Data : ";
  while (Head)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  Node *Head = NULL;
  for (int i = 1; i <= 10; i++)
  {
    inFromStart(Head, i);
  }
  printNode(Head);
}