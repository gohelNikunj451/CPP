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
void deleteNodeWithoutHead(Node *&curr)
{
  Node *temp = curr->next;
  curr->data = temp->data;
  curr->next = temp->next;
  delete temp;
}
int main()
{
  Node *Head;
}