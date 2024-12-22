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
void insertAtFront()
{
  if (Head == NULL)
  {
    printf("\nFirst create linked List !!");
    return;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->next = Head;
    Head->pre = temp;
    Head = temp;
    Head->pre = NULL;
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
void insertAtPerticular()
{
  if (Head == NULL)
  {
    printf("\nFirst create linked list");
    return;
  }
  else
  {
    int posi;
    printf("\nEnter position you want to insert : ");
    scanf("%d", &posi);
    if (posi == 1)
    {
      insertAtFront();
      return;
    }
    else
    {
      Node *curr = Head;
      while (--posi && curr)
      {
        curr = curr->next;
      }
      if (curr == NULL)
      {
        printf("\nEnter Valid position");
        return;
      }
      else
      {
        if (curr->next == NULL)
        {
          insertAtEnd();
          return;
        }
        else
        {
          Node *temp = (Node *)malloc(sizeof(Node));
          printf("\nEnter the data : ");
          scanf("%d", &temp->data);
          temp->pre = curr;
          temp->next = curr->next;
          curr->next = temp;
          temp->next->pre = temp;
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
    printf("\nLinked List is already Empty !!!");
    return;
  }
  else
  {
    if (Head->next == NULL)
    {
      Head = NULL;
    }
    else
    {
      Head = Head->next;
      free(Head->pre);
      Head->pre = NULL;
    }

    display();
  }
}
void deleteAtEnd()
{
  if (Head == NULL)
  {
    printf("\nLinked List is already Empty !!!");
    return;
  }
  else
  {
    Node *curr = Head;
    while (curr->next)
    {
      curr = curr->next;
    }
    curr->pre->next = NULL;
    free(curr);
    display();
  }
}
void deleteAtPerticular()
{
  if (Head == NULL)
  {
    printf("\nLinked List is already Empty !!!");
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
      while (--posi && curr)
      {
        curr = curr->next;
      }
      if (curr == NULL)
      {
        printf("\nEnter valid position !!!");
        return;
      }
      else
      {
        if (curr->next == NULL)
        {
          deleteAtEnd();
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
void search()
{
  int ele;
  Node *curr = Head;
  int i = 0, flag = 1;
  if (Head == NULL)
  {
    printf("\nLinked list is empty !!! ");
    return;
  }
  else
  {
    printf("\nEnter the element you want to search : ");
    scanf("%d", &ele);
    while (curr)
    {
      i++;
      if (curr->data == ele)
      {
        printf("\nElement is fould at : %d node", i);
        flag = 0;
      }
      curr = curr->next;
    }
    if (flag)
    {
      printf("\nElement is not fould in linked list");
    }
  }
}
void update()
{
  int ele;
  Node *curr = Head;
  int flag = 1;
  if (Head == NULL)
  {
    printf("\nLinked List is empty");
    return;
  }
  else
  {
    printf("\nEnter the element value you want to change : ");
    scanf("%d", &ele);
    while (curr)
    {

      if (curr->data == ele)
      {
        printf("\nElement is found Enter new element : ");
        scanf("%d", &curr->data);
        flag = 0;
      }
      curr = curr->next;
    }
    if (flag)
    {
      printf("\nElement is not found in linke list");
    }
  }
}
int main()
{
  int choise;
  printf("\n1.create");
  printf("\n2.insertAtFront");
  printf("\n3.insertAtEnd");
  printf("\n4.insertAtPerticular");
  printf("\n5.deleteAtFront");
  printf("\n6.deleteAtEnd");
  printf("\n7.deleteAtPerticular");
  printf("\n8.search");
  printf("\n9.Update");
  printf("\n10.exit");
  while (1)
  {
    printf("\nEnter the choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
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
      insertAtPerticular();
      break;
    case 5:
      deleteAtFront();
      break;
    case 6:
      deleteAtEnd();
      break;
    case 7:
      deleteAtPerticular();
      break;
    case 8:
      search();
      break;
    case 9:
      update();
      break;
    case 10:
      exit(1);
      break;
    default:
      printf("\nInvalid choise");
      break;
    }
  }
}