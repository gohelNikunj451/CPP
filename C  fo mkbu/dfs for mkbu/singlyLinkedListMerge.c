#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Head1 = NULL;
Node *Head2 = NULL;
Node *MergeHead = NULL;
void display(Node *Head)
{
  Node *temp = Head;
  printf("\nLL: ");
  while (temp)
  {
    printf(" %d ->", temp->data);
    temp = temp->next;
  }
}
void create(Node **Head)
{
  if ((*Head) != NULL) // if liked list is already created
  {
    printf("\nLinked list is already created");
    return;
  }
  else
  {
    (*Head) = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &(*Head)->data);
    (*Head)->next = NULL;
    printf("\nNode success fully inserted");
    display(Head);
  }
}
void insertAtEnd(Node **Head)
{
  if ((*Head) == NULL) // if linked list is empty
  {
    printf("First create Linked list");
    return;
  }
  else
  {
    Node *curr = (*Head);
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
    display((*Head));
  }
}
void merge(Node **Head1, Node **Head2)
{
  if ((*Head1) == NULL || (*Head2) == NULL)
  {
    printf("\n Linked List are Empty Merge can not possible");
    return;
  }
  else
  {
    Node *temp = (*Head1);
    while (temp->next)
    {
      temp = temp->next;
    }
    if (MergeHead == NULL)
    {
      MergeHead = (*Head1);
      temp->next = (*Head2);
    }
    else
    {
      Node *curr = MergeHead;

      while (curr->next)
      {
        curr = curr->next;
      }
      curr->next = (*Head1);
      temp->next = (*Head2);
    }

    printf("\nMerged Linked List");
    display(MergeHead);
    (*Head1) = NULL;
    (*Head2) = NULL;
  }
}
int main()
{
  int choise;
  printf("\n1.createFist");
  printf("\n2.createSeconde");
  printf("\n3.insertFist");
  printf("\n4.insertSecond");
  printf("\n5.merge");
  printf("\n6.exit");
  printf("\n%u", Head1);   // 0
  printf("\n%u", &Head1);  // 4532446
  printf("\n%u", *&Head1); // 0
  while (1)
  {
    printf("\nEnter the choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      create(&Head1);
      break;
    case 2:
      create(&Head2);
      break;
    case 3:
      insertAtEnd(&Head1);
      break;
    case 4:
      insertAtEnd(&Head2);
      break;
    case 5:
      merge(&Head1, &Head2);
      break;
    case 6:
      exit(1);
      break;
    default:
      printf("\nInvalid choise");
      break;
    }
  }
}
