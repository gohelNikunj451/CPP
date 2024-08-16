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
void insertStartNode(Node *&head, int d) // for  insert node start of singly linked list
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void printNode(Node *&head) // print node of singlu linked list
{
  Node *temp = head;
  cout << endl
       << "Data  : ";
  while (temp)
  {
    cout << " " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  Node *n1 = new Node(5); // create node dynamic way
  insertStartNode(n1, 10);

  insertStartNode(n1, 43);
  printNode(n1);
}