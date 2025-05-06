#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *left, *right;
  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};
Node *binaryTree()
{
  int x;
  cin >> x;
  Node *temp = new Node(x);

  if (x != -1)
  {
    cout << endl
         << "Enter left child of " << x << " : ";
    temp->left = binaryTree();
  }

  if (x != -1)
  {
    cout << endl
         << "Enter right child of " << x << " : ";
    temp->right = binaryTree();
  }
  return temp;
}
int main()
{
  Node *root;
  cout << "Enter root element of tree : ";
  root = binaryTree();
}