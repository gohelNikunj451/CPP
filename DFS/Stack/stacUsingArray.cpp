#include <iostream>
using namespace std;
class Stack
{
  int *arr;
  int size;
  int top;

public:
  Stack(int size)
  {
    this->size = size;
    top = -1;
    arr = new int[size];
  }
  void display()
  {
    cout << endl
         << "Data : ";
    for (int i = 0; i <= top; i++)
    {
      cout << " " << arr[i];
    }
  }
  void push(int d)
  {
    if (top == size - 1)
    {
      cout << endl
           << "Stack is overflowing";
    }
    else
    {
      top++;
      arr[top] = d;
      display();
    }
  }
  void pop()
  {
    if (top == -1)
    {
      cout << endl
           << "Stack is underflowing";
    }
    else
    {
      top--;
    }
    display();
  }
  void peek()
  {
    cout << endl
         << "The Peek element : " << arr[top];
  }
  void isEmpty()
  {
    if (top == -1)
    {
      cout << endl
           << "Stack is empty";
    }
    else
    {
      cout << endl
           << "Stack is not Empty";
    }
  }
  void Size()
  {
    cout << endl
         << "The size of Stack : " << top + 1;
  }
};
int main()
{
  Stack s1(5);
  s1.push(-1);
  s1.push(-20);
  s1.peek();
  s1.isEmpty();
  s1.Size();
}