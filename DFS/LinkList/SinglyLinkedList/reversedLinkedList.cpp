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
    cout << temp->data << " ";
    temp = temp->next;
  }
}
Node * reverseNode(Node *&Head)
{
  Node *pre = NULL;
  Node *fut = Head;
  Node *curr = Head;

  while (curr)
  {
    fut = curr->next;
    curr->next = pre;
    pre = curr;
    curr = fut;
  }
  return pre;
}
int main()
{
  Node *Head = NULL;
  inFromStart(Head, 3);
  inFromStart(Head, 2);
  inFromStart(Head, 33);
  inFromStart(Head, 31);
  printNode(Head);

  Head = reverseNode(Head);

  cout << endl
       << "Reversed data : ";
  printNode(Head);
}