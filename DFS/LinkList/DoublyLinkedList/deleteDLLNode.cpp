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
void deleteFromStart(Node *&Head)
{
  Head = Head->next;
  delete Head->pre;
  Head->pre = NULL;
}
void deleteFromEnd(Node *&Head)
{
  Node *curr = Head;
  while (curr->next)
  {
    curr = curr->next;
  }
  curr->pre->next = NULL;
  delete curr;
}
void deleteFromAnyPosi(Node *&Head, int x)
{
  if (x == 1)
  {
    Head = Head->next;
    delete Head->pre;
  }
  else
  {
    Node *curr = Head;
    while (--x)
    {
      curr = curr->next;
    }
    if (curr->next == NULL)
    {
      curr->pre->next = NULL;
      delete curr;
    }
    else
    {
      curr->pre->next = curr->next;
      curr->next->pre = curr->pre;
      delete curr;
    }
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
int main()
{
  Node *Head = NULL;
  for (int i = 1; i <= 5; i++)
  {
    inFromStart(Head, i);
  }
  printNode(Head);
  deleteFromStart(Head);
  printNode(Head);
  deleteFromEnd(Head);
  printNode(Head);
  deleteFromAnyPosi(Head, 3);
  printNode(Head);
}