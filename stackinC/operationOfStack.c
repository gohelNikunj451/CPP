#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Head = NULL;
void push()
{

  if (Head == NULL)
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\n Enter the data which you want to push : ");
    scanf("%d", &Head->data);
    Head->next = NULL;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\n Enter the data which you want to push : ");
    scanf("%d", &temp->data);
    temp->next = Head;
    Head = temp;
  }
}
void pop()
{
  if (Head == NULL)
  {
    printf("\n Stack is already empty ");
  }
  else
  {
    Node *temp = Head;
    Head = Head->next;
    free(temp);
    printf("\n successfully pop");
  }
}
void display()
{
  Node *temp = Head;
  printf("\n stack data's are : ");
  while (temp)
  {
    printf(" %d", temp->data);
    temp = temp->next;
  }
}
void peek()
{
  if (Head == NULL)
  {
    printf("\n stack is empty");
  }
  else
  {
    printf("\n peek value of stack : %d", Head->data);
  }
}
void main()
{
  int run = 1;
  printf("\n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit");
  while (run)
  {
    int ch;
    printf("\nEnter the choise : ");
    scanf("%d", &ch);
    switch (ch)
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
      run = 0;
      printf("\n you now exited");
      getch();
      break;
    default:
      printf("\n Invalid choise");
      break;
    }
  }
  getch();
}