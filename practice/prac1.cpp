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
void insertNode(Node *&Head, int d)
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
  cout << endl << "Data : ";
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  Node *Head;
  for (int i = 1; i <= 10; i++)
  {
    insertNode(Head, i);
  }
  printNode(Head);
}
