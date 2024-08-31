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
void deleteFromEndNth(Node *&Head, int x)
{
  Node *temp = Head;
  int count = 0;
  while (temp)
  {
    count++;
    temp = temp->next;
  }
  count -= x;
  Node *pre = Head;
  Node *curr = Head;
  while (count--)
  {
    pre = curr;
    curr = curr->next;
  }
  pre->next = curr->next;
  delete curr;
}
int main()
{
  Node *Head = NULL;

  inFromStart(Head, 3);
  inFromStart(Head, 2);
  inFromStart(Head, 7);
  inFromStart(Head, 9);
  inFromStart(Head, 6);
  inFromStart(Head, 10);
  inFromStart(Head, 33);

  printNode(Head);

  deleteFromEndNth(Head, 1);
  printNode(Head);
}