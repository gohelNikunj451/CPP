#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *pre;

  Node(int data)
  {
    this->data = data;
    next = NULL;
    pre = NULL;
  }
};
Node *inValueDll(int arr[], int index, int size, Node *back)
{
  if (index == size)
  {
    return NULL;
  }
  Node *temp = new Node(arr[index]);
  temp->pre = back;
  temp->next = inValueDll(arr, index + 1, size, temp);
  return temp;
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
int main()
{
  Node *Head = NULL;
  int arr[] = {1, 2, 4, 4, 5, 7, 4, 3, 2};
  int size = sizeof(arr) / sizeof(int);
  Head = inValueDll(arr, 0, size, NULL);
  printNode(Head);
}