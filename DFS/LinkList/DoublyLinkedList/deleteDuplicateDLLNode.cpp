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
    Node *next = NULL;
    Node *pre = NULL;
  }
};
void inFromEnd(Node *&Tail, Node *&Head, int d)
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
Node *removeDuplicateFromLinkedList(Node *&Head)
{
  Node *prev = Head;
  Node *curr = Head->next;
  while (curr)
  {
    if (curr->data == prev->data)
    {
      prev->next = curr->next;
      // curr->next->pre = curr->pre;
      delete curr;
      curr = prev->next;
    }
    else
    {
      prev = prev->next;
      curr = curr->next;
    }
    cout << " he";
  }
  return Head;
}
int main()
{
  Node *Head = NULL;
  Node *Tail = Head;
  for (int i = 1; i <= 10; i++)
  {
    if (i % 2 == 0)
    {
      inFromEnd(Tail, Head, i - 1);
    }
    else
    {
      inFromEnd(Tail, Head, i);
    }
  }
  printNode(Head);
  Head = removeDuplicateFromLinkedList(Head);
  printNode(Head);
}