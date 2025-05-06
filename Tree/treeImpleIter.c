#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};
typedef struct Node Node;

Node *createNode(int data)
{
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
Node *createTree(Node *root)
{
  if (root != NULL)
  {
    printf("\nTree is already created");
    return root;
  }
  root = createNode(0);
  printf("\nEnter root Node value : ");
  scanf("%d", &root->data);
  return root;
}
Node *insert(Node *root, int val)
{
  if (root == NULL)
  {
    printf("\nFirst create Tree !!!");
    return NULL;
  }
  Node *temp = root;
  while (1)
  {
    if (temp->data > val)
    {
      if (temp->left == NULL)
      {
        temp->left = createNode(val);
        break;
      }
      else
      {
        temp = temp->left;
      }
    }
    else if (temp->data < val)
    {
      if (temp->right == NULL)
      {
        temp->right = createNode(val);
        break;
      }
      else
      {
        temp = temp->right;
      }
    }
    else
    {
      printf("\nDuplicate value is not allowed !!!");
    }
  }
  return root;
}
Node *min(Node *root)
{
  Node *temp = root;
  while (temp->left)
  {
    temp = temp->left;
  }
  return temp;
}
Node *delete(Node *root, int val)
{
  // case 1 : root  is empty
  if (root == NULL)
  {
    printf("\nTree is empty");
    return root;
  }
  // case 2 : find value
  if (root->data == val)
  {
    // 0 child node Leaf node
    if (root->left == NULL && root->right == NULL)
    {
      free(root);
      return NULL;
    }
    // only 1 right child
    else if (root->left == NULL)
    {
      Node *temp = root->right;
      free(root);
      return temp;
    }
    // only 1 left child
    else if (root->right == NULL)
    {
      Node *temp = root->left;
      free(root);
      return temp;
    }
    // two child or whoe sub tree
    else
    {
      int minval = min(root->right)->data;
      root->data = minval;
      root->right = delete (root->right, minval);
      return root;
    }
  }
  // case 3 : traversal for find value
  else if (root->data > val)
  {
    root->left = delete (root->left, val);
  }
  else
  {
    root->right = delete (root->right, val);
  }
  return root;
}
void preorder(Node *root)
{
  if (root)
  {
    printf(" %d", root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void inorder(Node *root)
{
  if (root)
  {
    inorder(root->left);
    printf(" %d", root->data);
    inorder(root->right);
  }
}
void postorder(Node *root)
{
  if (root)
  {
    postorder(root->left);
    postorder(root->right);
    printf(" %d", root->data);
  }
}
void search(Node *root, int val)
{
  if (root == NULL)
  {
    printf("\n%d is not found in tree", val);
    return;
  }
  if (root->data > val)
  {
    search(root->left, val);
  }
  else if (root->data < val)
  {
    search(root->right, val);
  }
  else
  {
    printf("\n%d is found in tree", val);
  }
  return;
}
int main()
{
  int ch;
  int val;
  Node *Root = NULL;
  printf("1.Create Tree");
  printf("\n2.Insert()");
  printf("\n3.Delete()");
  printf("\n4.Preorder()");
  printf("\n5.Inorder()");
  printf("\n6.Postorder()");
  printf("\n7.Search()");
  printf("\n8.Exit()");
  while (1)
  {
    printf("\n\nEnter choise: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      Root = createTree(Root);
      break;
    case 2:
      printf("insert() Enter value : ");
      scanf("%d", &val);
      Root = insert(Root, val);
      break;
    case 3:
      printf("delete() Enter value : ");
      scanf("%d", &val);
      Root = delete (Root, val);
      break;
    case 4:
      printf("Preorder Traversal : ");
      preorder(Root);
      break;
    case 5:
      printf("Inorder Traversal : ");
      inorder(Root);
      break;
    case 6:
      printf("Postorder Traversal : ");
      postorder(Root);
      break;
    case 7:
      printf("Enter search value : ");
      scanf("%d", &val);
      search(Root, val);
      break;
    case 8:
      printf("\nExited...");
      exit(1);
      break;
    defalut:
      printf("\nInvlid choise!!!");
      break;
    }
  }
  return 0;
}