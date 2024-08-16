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
void inFromEnd(Node *&Head, int d, Node *&Tail)
{
  if (Head == NULL)
  {
    Head = new Node(d);
    Tail = Head;
  }
  else
  {
    Tail->next = new Node(d);

    Tail = Tail->next;
  }
}
void inPosition(Node *&Head, int d, int x)
{
  Node *temp;
  int i = 0;
  while (temp)
  {
    if (i == x - 1)
    {
      Node *temp2 = new Node(d);
      temp2->next = temp->next;
      temp->next = temp2;
      break;
    }
    i++;
    temp = temp->next;
  }
}
void printNode(Node *&Head)
{
  Node *temp = Head;
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  Node *Head = new Node(1);
  Node *Tail = Head;

  inFromEnd(Head, 23, Tail);
  inFromEnd(Head, 234, Tail);
  inFromStart(Head, 455);
  inFromEnd(Head, 23, Tail);
  inFromEnd(Head, 234, Tail);
  inFromStart(Head, 99);

  inPosition(Head, 0, 6);
  printNode(Head);
  cout << endl
       << "Head : " << Head << endl
       << "&Head : " << &Head << endl
       << "*&Head : " << *&Head;
}