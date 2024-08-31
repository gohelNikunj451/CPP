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
void inFromAnyPosi(Node *&Head, int d, int x)
{
  if (Head == NULL)
  {
    Head = new Node(d);
  }
  else
  {
    if (x == 0) // insert from start
    {
      Node *temp = new Node(d);
      temp->next = Head;
      Head->pre = temp;
      Head = temp;
    }
    else
    {
      Node *curr = Head;

      while (--x)
      {
        curr = curr->next;
      }
      if (!curr->next) // insert from end
      {
        Node *temp = new Node(d);
        curr->next = temp;
        temp->pre = curr;
      }
      else // insert from any position
      {
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        temp->pre = curr;
        temp->next->pre = temp;
      }
    }
  }
}
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
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
void printNodeRev(Node *&Head)
{
  Node *temp = Head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  cout << endl
       << "Reversed Data : ";
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->pre;
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
  inFromAnyPosi(Head, 100, 10);
  printNode(Head);
  printNodeRev(Head);
}