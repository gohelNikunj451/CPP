#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Head = NULL;
Node *Head2 = NULL;
void display(Node *Head)
{
  Node *temp = Head;
  printf("\n");
  while (temp)
  {
    printf(" %d -> ", temp->data);
    temp = temp->next;
  }
}
void merge()
{
  Node *temp = Head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = Head2;
  printf("\nMerged Linked List ");
  display(Head);
}
void insertLL1()
{
  int value;
  printf("\nEnter the value of Head1 : ");
  scanf("%d", &value);
  if (Head == NULL)
  {

    Head = (Node *)malloc(sizeof(Node));
    Head->data = value;
    Head->next = NULL;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    Node *curr = Head;
    while (curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->next = temp;
    temp->data = value;
    temp->next = NULL;
  }
  display(Head);
}
void insertLL2()
{
  int value;
  printf("\nEnter the value of Head1 : ");
  scanf("%d", &value);
  if (Head2 == NULL)
  {

    Head2 = (Node *)malloc(sizeof(Node));
    Head2->data = value;
    Head2->next = NULL;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    Node *curr = Head2;
    while (curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->next = temp;
    temp->data = value;
    temp->next = NULL;
  }
  display(Head2);
}
int main()
{
  int choise;
  printf("1.Insert Liked List 1 \n2.Insert Linked List 2 \n4.Delete");

  while (1)
  {
    printf("\nEnter your choice : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      insertLL1();
      break;
    case 2:
      insertLL2();
      break;
    case 3:
      merge();
      break;
    case 4:
      exit(1);
    default:
      printf("Invalid choise");
      break;
    }
  }
}