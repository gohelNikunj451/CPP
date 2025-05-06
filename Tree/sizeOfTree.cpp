#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
  int data;
  Node *left, *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};
int count = 0;
void size(Node *root, int &count)
{
  if (root == NULL)
  {
    return;
  }
  count++;
  size(root->left, count);
  size(root->right, count);
}
int main()
{
  int x;
  cout << "Enter the root element : ";
  cin >> x;
  Node *root = new Node(x);
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    int left;
    cout << endl
         << "Enter left child  of " << temp->data << " : ";
    cin >> left;
    if (left != 0)
    {
      temp->left = new Node(left);
      q.push(temp->left);
    }
    int right;
    cout << endl
         << "Enter right child of " << temp->data << " : ";
    cin >> right;
    if (right != 0)
    {
      temp->right = new Node(right);
      q.push(temp->right);
    }
  }
  size(root, count);
  cout << endl
       << "size of tree : " << count;
}
