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
Node *CreatLinkList(int arr[], int index, int size, Node *pre)
{
  if (index == size)
  {
    return pre;
  }
  Node *temp = new Node(arr[index]);
  temp->next = pre;
  return CreatLinkList(arr, index + 1, size, temp);
}
void printNode(Node *&Head)
{
  Node *temp = Head;
  while (temp)
  {
    cout << "Data : " << temp->data << endl;
    temp = temp->next;
  }
}
int main()
{
  Node *Head;
  int arr[] = {114, 5, 423, 5, 5, 3422, 6, 434, 36, 34};
  int index = 0;
  int size = sizeof(arr) / sizeof(int);

  Head = CreatLinkList(arr, index, size, NULL);

  printNode(Head);
}