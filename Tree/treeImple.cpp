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
void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << " " << root->data;
  preOrder(root->left);
  preOrder(root->right);
}
void postOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << " " << root->data;
}
void inOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << " " << root->data;
  inOrder(root->right);
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
  q.push(root);
  cout << endl
       << "Level wise traversal: ";
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    cout << " " << temp->data;
    if (temp->left != NULL)
    {
      q.push(temp->left);
    }
    if (temp->right != NULL)
    {
      q.push(temp->right);
    }
  }
  cout << endl
       << "PreOrder : ";
  preOrder(root);
  cout << endl
       << "PostOrder : ";
  postOrder(root);
  cout << endl
       << "inOrder : ";
  inOrder(root);
}