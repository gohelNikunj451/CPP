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
void display()
{
  Node *temp = Head;
  printf("\nData : ");
  do
  {
    printf(" %d -> ", temp->data);
    temp = temp->next;
  } while (temp != Head);
}
void create()
{
  if (Head != NULL)
  {
    printf("\nLinked List is already created");
    return;
  }
  else
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the Data : ");
    scanf("%d", &Head->data);
    Head->next = Head;
    display();
  }
}
void insertAtFront()
{
  if (Head == NULL)
  {
    printf("\nFirst create Linked list");
    return;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    Node *curr = Head;
    do
    {
      curr = curr->next;
    } while (curr->next != Head);
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->next = Head;
    Head = temp;
    curr->next = Head;
    display();
  }
}
void insertAtEnd()
{
  if (Head == NULL)
  {
    printf("\nFirst create linked list");
    return;
  }
  else
  {
    Node *curr = Head;
    Node *temp = (Node *)malloc(sizeof(Node));
    do
    {
      curr = curr->next;
    } while (curr->next != Head);
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->next = curr->next;
    curr->next = temp;
    display();
  }
}
void insertAtPosition()
{
  if (Head == NULL)
  {
    printf("\nFirst create linkde list");
    return;
  }
  else
  {
    int posi;
    printf("\nEnter the position you want to insert : ");
    scanf("%d", &posi);
    if (posi == 1)
    {
      insertAtFront();
      return;
    }
    else
    {
      Node *curr = Head;

      while (--posi)
      {
        curr = curr->next;
        if (curr == Head)
        {
          break;
        }
      }
      if (curr == Head)
      {
        printf("\nInvalid position");
        return;
      }
      else
      {
        if (curr->next == Head)
        {
          insertAtEnd();
          printf("\ninsertAtEnd is called");
          return;
        }
        else
        {
          Node *temp = (Node *)malloc(sizeof(Node));
          printf("\nEnter the data : ");
          scanf("%d", &temp->data);
          temp->next = curr->next;
          curr->next = temp;
          display();
        }
      }
    }
  }
}
void deleteAtFront()
{
  if (Head == NULL)
  {
    printf("\nLinked List is already empty");
    return;
  }
  else
  {
    if (Head->next == Head)
    {
      free(Head);
      Head = NULL;
      printf("\nLinked list is empty");
    }
    else
    {
      Node *curr = Head;
      do
      {
        curr = curr->next;
      } while (curr->next != Head);
      Head = Head->next;
      free(curr->next);
      curr->next = Head;
      display();
    }
  }
}
void deleteAtEnd()
{
  if (Head == NULL)
  {
    printf("\nLinked List is already empty");
    return;
  }
  else
  {
    if (Head->next == Head)
    {
      free(Head);
      Head = NULL;
      printf("\nLinked List is already empty");
      return;
    }
    else
    {
      Node *curr1 = Head;
      Node *curr2 = curr1;
      do
      {
        curr2 = curr1;
        curr1 = curr1->next;
      } while (curr1->next != Head);
      curr2->next = curr1->next;
      free(curr1);
      display();
    }
  }
}
void deleteAtPosition()
{
  if (Head == NULL)
  {
    printf("\nLinked List is already Empty");
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
      Node *curr2 = curr;
      while (--posi && curr->next != Head)
      {
        curr2 = curr;
        curr = curr->next;
      }
      if (curr == Head)
      {
        printf("\nInvalid choise");
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
          curr2->next = curr->next;
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
