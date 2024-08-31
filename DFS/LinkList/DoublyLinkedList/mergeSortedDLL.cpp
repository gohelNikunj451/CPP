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
void inFromEnd(Node *&Head, int d, Node *&Tail)
{
  if (Head == NULL)
  {
    Head = new Node(d);
    Tail = Head;
  }
  else
  {
    Node *temp = new Node(d);
    temp->pre = Tail;
    Tail->next = temp;
    Tail = temp;
    Tail->next = NULL;
  }
}
void printNode(Node *Head)
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
Node *mergeSortedLinkedList(Node *&Head1, Node *&Head2, Node *&Head, Node *&Tail)
{
  Tail = Head;
  while (Head1 && Head2)
  {
    if (Head1->data <= Head2->data)
    {
      Tail->next = Head1;
      Tail = Head1;
      Head1 = Head1->next;
      Tail->next = NULL;
    }
    else
    {
      Tail->next = Head2;
      Tail = Head2;
      Head2 = Head2->next;
      Tail->next = NULL;
    }
  }
  if (Head1)
    Tail->next = Head1;
  else
    Tail->next = Head2;
  return Head;
}
int main()
{
  Node *Head = new Node(0);
  Node *Head1 = NULL;
  Node *Head2 = NULL;
  Node *Tail = Head1;

  for (int i = 1; i <= 5; i++)
  {
    inFromEnd(Head1, i + i / 2, Tail);
  }
  printNode(Head1);
  Tail = Head2;
  for (int i = 1; i <= 5; i++)
  {
    inFromEnd(Head2, i + 3, Tail);
  }
  printNode(Head2);
  Head = mergeSortedLinkedList(Head1, Head2, Head, Tail);
  printNode(Head);
}