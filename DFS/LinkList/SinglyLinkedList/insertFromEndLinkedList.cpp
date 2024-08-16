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
void inValEnd(Node *&Head, int d, Node *&tail) // insert value from End
{
  if (Head == NULL)
  {
    Head = new Node(d);
    tail = Head;
  }
  else
  {
    tail->next = new Node(d);
    tail = tail->next;
  }
}
void inValStart(Node *&Head, int d) // insert value from start
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
void printVal(Node *&Head)
{
  Node *temp = Head;
  while (temp)
  {
    cout << endl
         << "Data : " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  Node *n1;
  Node *tail = n1;
  inValEnd(n1, 1, tail);
  inValEnd(n1, 2, tail);
  inValEnd(n1, 6, tail);
  inValStart(n1, 34);
  inValStart(n1, 4);
  inValEnd(n1, 100, tail);

  printVal(n1);
}