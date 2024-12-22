#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
  int data;
  struct Node *next;
  struct Node *pre;
};
typedef struct Node Node;
Node *Head = NULL;
void display()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty ");
    return;
  }
  else
  {
    Node *temp = Head;
    Node *revTemp = temp;
    printf("\n Data : ");
    while (temp)
    {
      printf(" %d ->", temp->data);
      revTemp = temp;
      temp = temp->next;
    }
    printf("\nReverse Data : ");
    while (revTemp)
    {
      printf(" %d <-", revTemp->data);
      revTemp = revTemp->pre;
    }
  }
}
void create()
{
  if (Head != NULL)
  {
    printf("\nLinked List is already created !!");
    return;
  }
  else
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &Head->data);
    Head->pre = NULL;
    Head->next = NULL;
    display();
  }
}
void insertAtEnd()
{
  if (Head == NULL)
  {
    printf("\nFirst create Linked List");
    return;
  }
  else
  {
    Node *curr = Head;
    while (curr->next)
    {
      curr = curr->next;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    curr->next = temp;
    temp->pre = curr;
    temp->next = NULL;
    display();
  }
}
void sort()
{

  if (Head == NULL)
  {
    printf("\nFirst create Linked List");
    return;
  }
  else
  {
    Node *tempi;
    Node *tempj;
    for (tempi = Head; tempi; tempi = tempi->next)
    {
      for (tempj = Head; tempj->next; tempj = tempj->next)
      {
        if (tempj->data > tempj->next->data)
        {
          int temp = tempj->data;
          tempj->data = tempj->next->data;
          tempj->next->data = temp;
        }
      }
    }
    printf("\nSorted Linked list : ");
    display();
  }
}
int main()
{
  int choise;
  printf("\n1.create");
  printf("\n2.isert");
  printf("\n3.sort");
  printf("\n4.Exit");
  while (1)
  {
    printf("\nEnter choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      create();
      break;
    case 2:
      insertAtEnd();
      break;
    case 3:
      sort();
      break;
    case 4:
      exit(1);
      break;
    default:
      printf("\nInvalid choise!!");
      break;
    }
  }
}