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
Node *reverseNodeRec(Node *&curr, Node *&pre)
{
  if (curr == NULL)
  {
    return pre;
  }
  Node *fut = curr->next;
  curr->next = pre;
  return reverseNodeRec(fut, curr);
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
int main()
{
  Node *Head;
  inFromStart(Head, 4);
  inFromStart(Head, 2);
  inFromStart(Head, 443);
  inFromStart(Head, 23);
  inFromStart(Head, 8);

  printNode(Head);
  Node *pre = NULL;
  Head = reverseNodeRec(Head, pre);
  printNode(Head);
}