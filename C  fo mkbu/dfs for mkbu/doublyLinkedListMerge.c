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
Node *Head1 = NULL, *Head2 = NULL, *MergeHead = NULL;

void display(Node **Head)
{
  if ((*Head) == NULL)
  {
    printf("\nLinked List is empty ");
    return;
  }
  else
  {
    Node *temp = (*Head);
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
void create(Node **Head)
{
  if ((*Head) != NULL)
  {
    printf("\nLinked List is already created !!");
    return;
  }
  else
  {
    (*Head) = (Node *)malloc(sizeof(Node));
    printf("\nEnter the data : ");
    scanf("%d", &(*Head)->data);
    (*Head)->pre = NULL;
    (*Head)->next = NULL;
    display(Head);
  }
}
void insertAtEnd(Node **Head)
{
  if ((*Head) == NULL)
  {
    printf("\nFirst create Linked List");
    return;
  }
  else
  {
    Node *curr = (*Head);
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
    display(Head);
  }
}
void merge(Node **Head1, Node **Head2)
{
  if ((*Head1) == NULL || (*Head2) == NULL)
  {
    printf("\nLinked List is no possible !!");
    return;
  }
  else
  {
    Node *Head1last = (*Head1);
    while (Head1last->next)
    {
      Head1last = Head1last->next;
    }
    if (MergeHead == NULL)
    {
      MergeHead = (*Head1);
      Head1last->next = (*Head2);
      (*Head2)->pre = Head1last;
    }
    else
    {
      Node *temp = MergeHead;
      while (temp->next)
      {
        temp = temp->next;
      }
      temp->next = (*Head1);
      (*Head1)->pre = temp;
      Head1last->next = (*Head2);
      (*Head2)->pre = Head1last;
    }
    (*Head1) = NULL;
    (*Head2) = NULL;
    display(&MergeHead);
  }
}
int main()
{
  int choise;
  printf("\n1.create First ");
  printf("\n2.create second ");
  printf("\n3.insert first");
  printf("\n4.insert second");
  printf("\n5.merge");
  printf("\n6.exit");
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