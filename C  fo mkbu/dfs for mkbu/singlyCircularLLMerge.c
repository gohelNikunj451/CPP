#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Head1 = NULL, *Head2 = NULL, *MergeHead = NULL;

void display(Node **Head)
{
  Node *temp = (*Head);
  printf("\nData : ");
  do
  {
    printf(" %d -> ", temp->data);
    temp = temp->next;
  } while (temp != (*Head));
}

void create(Node **Head)
{
  if ((*Head) != NULL)
  {
    printf("\nLinked List is already created");
    return;
  }
  else
  {
    (*Head) = (Node *)malloc(sizeof(Node));
    printf("\nEnter the Data : ");
    scanf("%d", &(*Head)->data);
    (*Head)->next = (*Head);
    display(Head);
  }
}
void insertAtEnd(Node **Head)
{
  if ((*Head) == NULL)
  {
    printf("\nFirst create linked list");
    return;
  }
  else
  {
    Node *curr = (*Head);
    Node *temp = (Node *)malloc(sizeof(Node));
    do
    {
      curr = curr->next;
    } while (curr->next != (*Head));
    printf("\nEnter the data : ");
    scanf("%d", &temp->data);
    temp->next = curr->next;
    curr->next = temp;
    display(Head);
  }
}
void merge(Node **Head1, Node **Head2)
{
  if ((*Head1) == NULL || (*Head2) == NULL)
  {
    printf("\nLinked list is empty!!!");
    return;
  }
  else
  {
    Node *Head1Last = (*Head1);
    while (Head1Last->next != (*Head1))
    {
      Head1Last = Head1Last->next;
    }
    Node *Head2Last = (*Head2);
    while (Head2Last->next != (*Head2))
    {
      Head2Last = Head2Last->next;
    }
    if (MergeHead == NULL)
    {
      MergeHead = (*Head1);
      Head1Last->next = (*Head2);
      Head2Last->next = (*Head1);
    }
    else
    {
      Node *MergeHeadLast = MergeHead;
      while (MergeHeadLast->next != MergeHead)
      {
        MergeHeadLast = MergeHeadLast->next;
      }
      MergeHeadLast->next = (*Head1);
      Head1Last->next = (*Head2);
      Head2Last->next = MergeHead;
    }

    (*Head1) = NULL;
    (*Head2) = NULL;
    display(&MergeHead);
  }
}
int main()
{
  int choise;
  printf("0.exit");
  printf("\n1.createFirst");
  printf("\n2.createSecond");
  printf("\n3.insertFirst");
  printf("\n4.insertSecond");
  printf("\n5.Merge");
  while (1)
  {
    printf("\nEnter the choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 0:
      exit(1);
      break;
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
    default:
      printf("\nInvalid choise");
      break;
    }
  }
}