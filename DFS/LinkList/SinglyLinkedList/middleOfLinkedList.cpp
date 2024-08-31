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
Node*findMiddle(Node*&Head){
  Node *Fast = Head; // fast pointer can do 2 step at time
  Node *Slow = Head; // slow pointer can do 1 step at time like normal pointer

  while(Fast!=NULL and Fast->next!=NULL){
    Slow = Slow->next;
    Fast = Fast->next->next;
  }
  return Slow;
}
int main()
{
  Node *Head=NULL;
  inFromStart(Head, 2);
  inFromStart(Head, 4);
  inFromStart(Head, 7);
  inFromStart(Head, 9);
  inFromStart(Head, 100);

  printNode(Head);

  Node *Middle = findMiddle(Head);

  printNode(Middle);
}