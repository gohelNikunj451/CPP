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
Node *rotateNode(Node *&Head, int x)
{
  if (!Head or !Head->next) // for empty Node list or single Node
    return Head;
  // for find actual rotate intrate opration = (rotate count % total node)
  Node *curr = Head;
  Node *pre = NULL;
  int i = 1;
  while (i <= x)
  {
    while (curr->next)
    {
      pre = curr;
      curr = curr->next;
    }
    pre->next = NULL;
    curr->next = Head;
    Head = curr;
    i++;
  }
  cout << endl
       << "After Rotated : ";
  return Head;
}
int main()
{
  Node *Head = NULL;
  for (int i = 1; i <= 1; i++)
  {
    inFromStart(Head, i);
  }
  printNode(Head);
  Head = rotateNode(Head, 11);
  printNode(Head);
}