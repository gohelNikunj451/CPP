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
  printf("\nLL: ");
  while (temp)
  {
    printf(" %d ->", temp->data);
    temp = temp->next;
  }
}
void create()
{
  if (Head != NULL) // if liked list is already created
  {
    printf("\nLinked list is already created");
    return;
  }
  else
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &Head->data);
    Head->next = NULL;
    printf("\nNode success fully inserted");
    display();
  }
}
void insertAtFront()
{
  if (Head == NULL) // if linked list is empty
  {
    printf("First create Linked list");
    return;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->next = Head;
    Head = temp;
    printf("\nNode success fully inserted");
    display();
  }
}
void insertAtEnd()
{
  if (Head == NULL) // if linked list is empty
  {
    printf("First create Linked list");
    return;
  }
  else
  {
    Node *curr = Head;
    while (curr->next != NULL)
    {
      curr = curr->next;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    curr->next = temp;
    temp->next = NULL;
    printf("\nNode success fully inserted");
    display();
  }
}
void insertAtPerticular()
{
  if (Head == NULL) // if linked lis is empty
  {
    printf("\nFirst create linked list");
    return;
  }
  else
  {
    int posi;
    printf("\nEnter position you want to insert : ");
    scanf("%d", &posi);
    if (posi == 1) // if you want to front insertion
    {
      insertAtFront();
      printf("\nNode success fully inserted");
      display();
      return;
    }
    else
    {
      Node *curr = Head;
      while (--posi && curr)
      {
        curr = curr->next;
      }
      if (curr == NULL || !curr) // if invlalid position
      {
        printf("\nEnter valid position !!!");
        return;
      }
      else
      {
        if (curr->next == NULL) // if position is last
        {
          insertAtEnd();
          printf("\nNode success fully inserted");
          display();
        }
        else
        {
          Node *temp = (Node *)malloc(sizeof(Node));
          printf("\nEnter the data : ");
          scanf("%d", &temp->data);
          temp->next = curr->next;
          curr->next = temp;
          printf("\nNode success fully inserted");
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
    printf("\nLinked List is empty");
    return;
  }
  else
  {
    Node *temp = Head;
    Head = Head->next;
    free(temp);
    printf("\nNode success fully Deleted");
    display();
  }
}
void deleteAtEnd()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty");
    return;
  }
  else
  {
    Node *curr = Head;
    Node *currpre = curr;
    while (curr->next != NULL)
    {
      currpre = curr;
      curr = curr->next;
    }
    currpre->next = NULL;
    free(curr);
    printf("\nNode success fully Deleted");
    display();
  }
}
void deleteAtPerticular()
{
  if (Head == NULL)
  {
    printf("\nLinked List is empty");
    return;
  }
  else
  {
    int posi;
    printf("\nEnter the position you want to delete : ");
    scanf("%d", &posi);
    if (posi == 1) // if you enter first position
    {
      deleteAtFront();
    }
    Node *curr = Head;
    Node *currpre = curr;
    while (--posi && curr)
    {
      currpre = curr;
      curr = curr->next;
    }
    if (curr == NULL)
    {
      printf("\nInvalid Position");
      deleteAtPerticular();
      return;
    }
    else
    {
      if (curr->next == NULL) // if position is last
      {
        deleteAtEnd();
        return;
      }
      else
      {
        currpre->next = curr->next;
        free(curr);
        printf("\nNode success fully Deleted");
        display();
      }
    }
  }
}
int main()
{
  int ch;
  printf("1.create \n2.insertAtFront \n3.insertAtEnd \n4.insertAtPerticular \n5.deleteAtFront \n6.deleteAtEnd \n7.deleteAtPerticular \n8.dispaly \n9.exit");

  while (1)
  {
    printf("\nEnter your choise : ");
    scanf("%d", &ch);
    switch (ch)
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
      display();
      break;
    case 9:
      exit(1);
      break;
    default:
      printf("\nInvalid Choise !! please reEnter the Choise ->");
      break;
    }
  }
}