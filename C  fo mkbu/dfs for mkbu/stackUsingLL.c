#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Top = NULL;
void push()
{
  if (Top == NULL)
  {
    Top = (Node *)malloc(sizeof(Node));
    printf("\nEnter data : ");
    scanf("%d", &Top->data);
    Top->next = NULL;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter data : ");
    scanf("%d", &temp->data);
    temp->next = Top;
    Top = temp;
  }
}
void pop()
{
  if (Top == NULL)
  {
    printf("\nStack is underflow!!");
    return;
  }
  else    
  {
    Node *temp = Top;
    Top = Top->next;
    free(temp);
  }
}
void display()
{
  if (Top == NULL)
  {
    printf("\nStack is empty!!");
    return;
  }
  else
  {
    Node *temp = Top;
    printf("\nData : ");
    while (temp)
    {
      printf(" %d -> ", temp->data);
      temp = temp->next;
    }
  }
}
void peek()
{
  if (Top == NULL)
  {
    printf("\nStack is empty!!");
    return;
  }
  else
  {
    printf("Peek element is : %d", Top->data);
  }
}
int main()
{
  int choise;
  printf("\n1.push()");
  printf("\n2.pop()");
  printf("\n3.peek()");
  printf("\n4.display()");
  printf("\n5.exit()");
  while (1)
  {
    printf("\nEnter you choise : ");
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
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      exit(1);
      break;
    default:
      printf("\nInvalid choise!!");
      break;
    }
  }
}