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
class Stack
{
public:
  Node *top;
  int size;
  Stack()
  {
    size = 0;
    top = NULL;
  }
  void display()
  {
    Node *temp = top;
    cout << endl
         << "Data : ";
    while (temp)
    {
      cout << " " << temp->data;
      temp = temp->next;
    }
  }
  void push(int d)
  {
    if (top == NULL)
    {
      top = new Node(d);
    }
    else
    {
      Node *temp = new Node(d);
      temp->next = top;
      top = temp;
    }
    size++;
    display();
  }
  void pop()
  {
    if (top == NULL)
    {
      cout << endl
           << "Stack is empty";
    }
    else
    {
      Node *temp = top;
      top = top->next;
      temp = NULL;
      size--;
      display();
    }
  }
  void peek()
  {
    if (top == NULL)
    {
      cout << endl
           << "Stack is empty there is not any peek element";
    }
    else
    {
      cout << endl
           << "Peek element is : " << top->data;
    }
  }
  void isEmpty()
  {
    if (top == NULL)
    {
      cout << endl
           << "Stack is Empty";
    }
    else
    {
      cout << endl
           << "Stack is not Empty";
    }
  }
  void sizeOfStack()
  {
    cout << endl
         << "Size of Stack : " << size;
  }
};
int main()
{
  Stack s;
  s.push(2);
  s.push(4);
  s.push(19);
  s.pop();
  s.pop();
  s.pop();
  s.sizeOfStack();
  s.isEmpty();
  s.pop();
  s.isEmpty();
  s.push(2);
  s.peek();
}