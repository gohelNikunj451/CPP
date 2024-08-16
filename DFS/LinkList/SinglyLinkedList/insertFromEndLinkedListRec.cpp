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
Node *CreateLinkList(int arr[], int index, int size)
{
  if (index == size)
  {
    return NULL;
  }
  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkList(arr, index + 1, size);
  return temp;
}
void printLinkedList(Node *&Head)
{
  Node *temp;
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
  int arr[] = {2, 45, 44, 23, 2, 5, 85, 3, 24};
  int size = sizeof(arr) / sizeof(int);
  int index = 0;

  n1 = CreateLinkList(arr, index, size);

  printLinkedList(n1);
}