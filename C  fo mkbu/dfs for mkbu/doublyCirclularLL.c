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
    printf("\nLinked List is empty");
    return;
  }
  Node *temp = Head;
  Node *revTemp = temp;
  printf("\nData : ");
  do
  {
    printf(" %d -> ", temp->data);
    revTemp = temp;
    temp = temp->next;
  } while (temp != Head);
  printf("\nReverse LL : ");
  do
  {
    printf(" %d -> ", revTemp->data);
    revTemp = revTemp->pre;

  } while (revTemp != Head->pre);
}
void create()
{
  if (Head != NULL)
  {
    printf("\nLinked list is already created");
    return;
  }
  else
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &Head->data);
    Head->next = Head;
    Head->pre = Head;
    display();
  }
}
void insertAtFront()
{
  if (Head == NULL)
  {
    printf("\nFrist create Linked List !!");
    return;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->pre = Head->pre;
    temp->next = Head;
    Head->pre = temp;
    temp->pre->next = temp;
    Head = temp;

    display();
  }
}
void insertAtEnd()
{
  if (Head == NULL)
  {
    printf("\nFrist create Linked List !!");
    return;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->pre = Head->pre;
    temp->next = Head;
    temp->pre->next = temp;
    Head->pre = temp;
    display();
  }
}
void insertAtPosition()
{
  if (Head == NULL)
  {
    printf("\nFrist create Linked List !!");
    return;
  }
  else
  {
    int posi;
    Node *temp = (Node *)malloc(sizeof(Node));
    Node *curr = Head;
    printf("\nEnter position you want to insert : ");
    scanf("%d", &posi);
    if (posi == 1)
    {
      insertAtFront();
      return;
    }
    while (--posi)
    {
      curr = curr->next;
      if (curr == Head)
      {
        printf("\nInvalid position !!!");
        return;
        break;
      }
    }
    if (curr->next == Head)
    {
      insertAtEnd();
      return;
    }
    temp->pre = curr;
    temp->next = curr->next;
    curr->next = temp;
    temp->next->pre = temp;

    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    display();
  }
}
void deleteAtFront()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty !!");
    return;
  }
  else
  {
    if (Head->next == Head)
    {
      Head = NULL;
      display();
      return;
    }
    Head->next->pre = Head->pre;
    Head = Head->next;
    free(Head->pre->next);
    Head->pre->next = Head;
    display();
  }
}
void deleteAtEnd()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty !!");
    return;
  }
  else
  {
    if (Head->next == Head)
    {
      Head = NULL;
      display();
      return;
    }
    Node *temp = Head->pre;
    temp->pre->next = Head;
    Head->pre = temp->pre;
    free(temp);
    display();
  }
}
void deleteAtPosition()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty !!");
    return;
  }
  else
  {
    int posi;
    printf("\nEnter the position you want to delete : ");
    scanf("%d", &posi);
    if (posi == 1)
    {
      deleteAtFront();
      return;
    }
    else
    {
      Node *curr = Head;
      while (--posi && posi >= 0)
      {
        curr = curr->next;
        if (curr != Head)
          break;
      }
      if (curr == Head)
      {
        printf("\nInvalid choise !!");
        return;
      }
      else
      {
        if (curr->next == Head)
        {
          deleteAtEnd();
          return;
        }
        else
        {
          curr->pre->next = curr->next;
          curr->next->pre = curr->pre;
          free(curr);
          display();
        }
      }
    }
  }
}
int main()
{
  int choise;
  printf("\n0.Exit");
  printf("\n1.create");
  printf("\n2.insertAtFront");
  printf("\n3.insertAtEnd");
  printf("\n4.insertAtPosition");
  printf("\n5.deleteAtFront");
  printf("\n6.deleteAtEnd");
  printf("\n7.deleteAtPosition");

  printf("");
  while (1)
  {
    printf("\nEnter your choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 0:
      exit(1);
      break;
    case 1:
      create();
      break;
    case 2:
      insertAtFront();
      break;
    case 3:
      insertAtEnd();
      break;
    case 4:
      insertAtPosition();
      break;
    case 5:
      deleteAtFront();
      break;
    case 6:
      deleteAtEnd();
      break;
    case 7:
      deleteAtPosition();
      break;
    default:
      printf("\nInvalid choise");
      break;
    }
  }
}
