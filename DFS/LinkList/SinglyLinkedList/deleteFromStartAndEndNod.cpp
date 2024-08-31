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
void inFromStart(Node *&Head, int d, Node *&Tail) // for insert Value from start
{
  if (Head == NULL)
  {
    Head = new Node(d);
    Tail = Head;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = Head;
    Head = temp;
  }
}
void inFromEnd(Node *&Head, int d, Node *&Tail) // for insert value from end
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
    Tail = temp;
  }
}
void deleteFromStart(Node *&Head) // delete Node From start of Nodes
{
  if (Head == NULL) // if Node is already Empty
  {
    cout << "Node is Empty !" << endl
         << "First Create Node and Enter the value";
  }
  else // if Node is not Empty
  {
    Node *temp = Head;
    Head = temp->next;
    delete temp;
  }
}
void deleteFromEnd(Node *&Head, Node *&Tail) // delete Node from End of Nodes
{
  if (Tail == NULL) // if Node is already Empty
  {
    cout << "Node is Empty !" << endl
         << "First Create Node and Enter the value";
  }
  else // if Node is not Empty
  {
    Node *curr = Head;
    Node *pre; // for store previous Node of Delete Node
    while (curr->next != NULL)
    {
      pre = curr;
      curr = curr->next;
    }
    delete curr;
    pre->next = NULL;
    Tail = pre; // for tail point to end of Nodes
  }
}
void deletePerticularNode(Node *&Head, int x, Node *&Tail) // Delete Node from perticular Node
{
  Node *curr = Head;
  Node *pre = curr;

  while (--x)
  {
    pre = curr;
    curr = curr->next;
  }
  pre->next = curr->next;
  if (curr->next == NULL) // if delete node position is last of all nodes
  {
    Tail = pre; // if condition becomes true then tail = pre;
  }
  delete curr;
}
Node *&deletePerticularNodeRec(Node *&Curr, int x)
{
  if (x == 1)
  {
    Node *Temp = Curr->next;
    delete Curr;
    return Temp;
  }
  Curr->next = deletePerticularNodeRec(Curr->next, x-1);
  return Curr;
}
void printNode(Node *&Head)
{
  Node *temp = Head;
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  Node *Head = NULL;
  Node *Tail = Head;

  inFromStart(Head, 5, Tail);
  deleteFromStart(Head);
  printNode(Head);
  cout << "Head : " << Head;
  inFromStart(Head, 1, Tail);

  inFromStart(Head, 2, Tail);
  inFromEnd(Head, 10, Tail);
  inFromEnd(Head, 1, Tail);

  printNode(Head);
  deleteFromStart(Head);
  printNode(Head);
  deleteFromEnd(Head, Tail);
  printNode(Head);

  inFromEnd(Head, 100, Tail);
  printNode(Head);

  inFromStart(Head, 99, Tail);
  printNode(Head);

  deletePerticularNode(Head, 4, Tail);
  printNode(Head);
  inFromEnd(Head, 89, Tail);
  printNode(Head);

  Head = deletePerticularNodeRec(Head, 3);
  printNode(Head);
}