#include <stdio.h>
#include <conio.h>
#define capacity 2

int top = -1, arr[capacity];
void push(int value)
{
  if (top >= capacity - 1)
  {
    printf("\n Stack is overflow");
  }
  else
  {
    arr[++top] = value;
  }
}
void pop()
{
  if (top <= -1)
  {
    printf("\n Stack is onderflow");
  }
  else
  {
    top--;
  }
}
int isempty()
{
  if (top <= -1)
    return 1;
  else
    return 0;
}
int size()
{
  return top;
}
int peek()
{
  return arr[top];
}
void main()
{
  push(1);
  printf("\n %d", peek());
  push(100);
  push(2009);
  printf("\n %d", peek());
  pop();
  printf("\n %d", peek());
  printf("\n stack is empty : %d", isempty());

  getch();
}