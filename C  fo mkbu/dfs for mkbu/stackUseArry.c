#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int top = -1;
const capacity = 10;
int arr[capacity];
void push()
{
  if (top == capacity - 1)
  {
    printf("\nStack overFlow");
    return;
  }
  else
  {
    printf("\nEnter the data : ");
    scanf("%d", &arr[++top]);
  }
}
void pop()
{
  if (top == -1)
  {
    printf("\nStack is underFlow");
    return;
  }
  else
  {
    arr[top--] = 0;
  }
}
void peep()
{
  if (top == -1)
  {
    printf("\nStack is empty");
    return;
  }
  else
  {
    printf("\nTop element of stack : %d", arr[top]);
  }
}
void size()
{
  if (top == -1)
  {
    printf("\nStack is empty");
    return;
  }
  else
  {
    printf("\nthe size of stack : %d", top + 1);
  }
}
int main()
{
  int choise;
  printf("\n1.push()");
  printf("\n2.pop()");
  printf("\n3.peep()");
  printf("\n4.size()");

  printf("\n5exit");

  while (1)
  {
    printf("\nEnter the choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      peep();
      break;
    case 4:
      size();
      break;
    case 5:
      exit(1);
      break;
    default:
      printf("\nInvalid choise!!!");
      break;
    }
  }
}