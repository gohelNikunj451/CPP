#include <stdio.h>
#include <conio.h>
#define size 6
int top = -1;
char str[20];
void push(char ch)
{
  if (top >= size - 1)
  {
    printf("\n Stack is overflow");
  }
  else
  {
    str[++top] = ch;
  }
}
void pop()
{
  if (top == -1)
  {
    printf("Stack is underflow");
  }
  else
  {
    top--;
  }
}
char peek()
{
  if (top == -1)
  {
    printf("Stack is empty");
  }
  else
  {
    return str[top];
  }
}
int isEmpty()
{
  if (top == -1)
    return 1;
  else
    return 0;
}
void main()
{
  char para[size];
  int ans = 1;
  printf("Enter parathennse : ");
  gets(para);

  puts(para);
  for (int i = 0; i < size; i++)
  {
    char ch = para[i];
    if (ch == '{' || ch == '(' || ch == '[')
    {
      push(ch);
    }
    else
    {
      if (!isEmpty())
      {
        if ((ch == ')' && peek() == '(') || (ch == '}' && peek() == '{') || (ch == ']' && peek() == '['))
        {
          pop();
        }
        else
        {
          ans = 0;
        }
      }
      else
      {
        ans = 0;
      }
    }
  }
  if (isEmpty())
  {
    printf("\n valid parantheses");
  }
  else
  {
    printf("\n not valid parantheses");
  }
  getch();
}