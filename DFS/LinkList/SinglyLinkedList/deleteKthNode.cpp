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
Node *deleteNode(Node *&Head, int k)
{
  if(k==1)
    return NULL;
  Node *curr = Head;
  Node *pre = NULL;
  int count = 1;
  while (curr)
  {
    if (count == k)
    {
      pre->next = curr -> next;
      delete curr;
      curr = pre->next;
      count = 1;
    }
    else
    {
      pre = curr;
      curr = curr->next;
      count++;
    }
  }
  return Head;
}
int main()
{
  Node *Head = NULL;
  for (int i = 1; i <= 10; i++)
  {
    inFromStart(Head, i);
  }
  printNode(Head);

  Head = deleteNode(Head, 1);

  printNode(Head);
}