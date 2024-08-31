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
    pre = NULL;
    next = NULL;
  }
};
void inFromEnd(Node *&Head, Node *&Tail, int d)
{
  if (Head == NULL)
  {
    Head = new Node(d);
    Tail = Head;
  }
  else
  {
    Node *temp = new Node(d);
    Tail->next = temp;
    temp->pre = Tail;
    Tail = temp;
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
void printNodeRev(Node *Tail)
{
  Node *temp = Tail;
  cout << endl
       << "Reverse Data : ";
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->pre;
  }
}
int main()
{
  Node *Head = NULL;
  Node *Tail = Head;
  for (int i = 1; i <= 10; i++)
  {
    inFromEnd(Head, Tail, i);
  }
  printNode(Head);
  printNodeRev(Tail);
}