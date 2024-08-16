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
void insertNode(Node *&head, int data)
{
  if (head == NULL)
  {
    head = new Node(data);
  }
  else
  {
    Node *temp;
    temp->next = head;
    head = temp;
  }
}
void printNode(Node *&head)
{
  Node *temp = head;
  while (temp)
  {
    cout << "Data : " << endl;
    temp = temp->next;
  }
}
int main()
{
  Node *head;

  int arr[] = {1, 23, 4, 4, 5, 64, 34, 53, 45, 3};

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    insertNode(head, arr[i]);
  }
  printNode(head);
}