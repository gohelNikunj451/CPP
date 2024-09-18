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
void display(Node *&Head)
{
  Node *temp = Head;
  cout << endl
       << "Data : ";
  do
  {
    cout << " " << temp->data;
    temp = temp->next;
  } while (temp != Head);
}
void insertNodeFromStart(Node *&Head)
{
  int d;
  cout << endl
       << "Enter Value : ";
  cin >> d;
  if (Head == NULL)
  {
    Head = new Node(d);
    Head->pre = Head;
    Head->next = Head;
  }
  else
  {
    Node *temp = new Node(d);
    temp->next = Head;
    temp->pre = Head->pre;
    temp->pre->next = temp;
    Head->pre = temp;
    Head = temp;
  }
  display(Head);
}
void insertNodeFromEnd(Node *&Head)
{
  int d;
  cout << endl
       << "Enter value : ";
  cin >> d;
  if (Head == NULL)
  {
    Head = new Node(d);
    Head->pre = Head;
    Head->next = Head;
  }
  else
  {
    Node *temp = new Node(d);
    Node *curr = Head->pre;
    curr->next = temp;
    temp->pre = curr;
    temp->next = Head;
    Head->pre = temp;
  }
  display(Head);
}
void insertFromAnyPosi(Node *&Head)
{
  int posi;

  cout << endl
       << "Enter the position of Node you want to insert : ";
  cin >> posi;

  Node *curr = Head;
  while (--posi)
  {
    curr = curr->next;
  }
  if (curr == Head)
  {
    insertNodeFromStart(Head);
  }
  else if (curr->next == Head)
  {
    insertNodeFromEnd(Head);
  }
  else
  {
    int d;
    cout << "Enter the value of Node : ";
    cin >> d;
    Node *temp = new Node(d);
    temp->pre = curr;
    temp->next = curr->next;
    curr->next->pre = temp;
    curr->next = temp;
    display(Head);
  }
}
void deleteFromStart(Node *&Head)
{
  if (Head->next == Head)
  {
    cout << endl
         << "Linked List is success fully Deleted";
    delete Head;
  }
  else
  {
    Node *temp = Head;
    Head = Head->next;
    Head->pre = temp->pre;
    temp->pre->next = Head;
    delete temp;
    cout << endl
         << "Node deleted success fully";
    display(Head);
  }
}
void deleteFromEnd(Node *Head)
{
  if (Head->next == Head)
  {
    cout << endl
         << "Linked LIst is success fully deleted";
    delete Head;
  }
  else
  {
    Node *temp = Head->pre;
    Head->pre = temp->pre;
    temp->pre->next = Head;
    delete temp;
    cout << endl
         << "Node deleted success fully";
    display(Head);
  }
}

void deletFromAnyPosi(Node *&Head)
{
  int posi;
  cout << endl
       << "Enter the position of Node which you want to delete : ";
  cin >> posi;
  Node *curr = Head;
  while (--posi)
  {
    curr = curr->next;
  }
  if (curr == Head)
  {
    deleteFromStart(Head);
  }
  else if (curr->next == Head)
  {
    deleteFromEnd(Head);
  }
  else
  {
    curr->pre->next = curr->next;
    curr->next->pre = curr->pre;
    delete curr;
    display(Head);
  }
}
int main()
{
  Node *Head = NULL;
  int flag = 1;
  cout << "1.Insert Node From start" << endl
       << "2.Insert Node from end" << endl
       << "3.Insert Node From any position " << endl
       << "4.Delete Node From start" << endl
       << "5.Delete Node from end" << endl
       << "6.Delete Node from any position " << endl
       << "7.Exit";
  while (flag)
  {
    int ch;
    cout << endl
         << "Enter your choise : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
      insertNodeFromStart(Head);
      break;
    case 2:
      insertNodeFromEnd(Head);
      break;
    case 3:
      insertFromAnyPosi(Head);
      break;
    case 4:
      deleteFromStart(Head);
      break;
    case 5:
      deleteFromEnd(Head);
      break;
    case 6:
      deletFromAnyPosi(Head);
      break;
    case 7:
      flag = 0;
      break;
    default:
      cout << endl
           << "Invalid Choise";
      break;
    }
  }
}