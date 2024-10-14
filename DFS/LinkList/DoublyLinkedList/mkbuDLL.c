#include <stdio.h>
#include <conio.h>
#include <malloc.h>
// chat GPT liknk abot malloc : https : // chatgpt.com/share/66ebf948-7eb4-800b-8b2d-307b4b593d9d
struct Node
{
  int data;
  struct Node *pre;
  struct Node *next;
};
typedef struct Node Node;
Node *Head = NULL;
void display()
{
  Node *temp = Head;
  printf("\nData : ");
  while (temp)
  {
    printf(" %d", temp->data);
    temp = temp->next;
  }
}
void insertFromStart()
{
  if (Head == NULL)
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the value of Node : ");
    scanf("%d", &Head->data);
    Head->pre = NULL;
    Head->next = NULL;
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));

    printf("\nEnter the value of Node : ");
    scanf("%d", &temp->data);
    Head->pre = temp;
    temp->next = Head;
    Head = temp;
    temp->pre = NULL;
  }
  display();
}
void insertFromEnd()
{
  if (Head == NULL)
  {
    Head = (Node *)malloc(sizeof(Node));
    printf("\nEnter the value of Node : ");
    scanf("%d", &Head->data);
    Head->pre = NULL;
    Head->next = NULL;
  }
  else
  {
    Node *curr = Head;
    while (curr->next)
    {
      curr = curr->next;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the value of Node : ");
    scanf("%d", &temp->data);
    curr->next = temp;
    temp->pre = curr;
    temp->next = NULL;
  }
  display();
}
void insertAtAnyPosi()
{
  int posi;
  printf("\nEnter the  position of Node You want to insert : ");
  scanf("%d", &posi);
  Node *curr = Head;
  while (--posi)
  {
    curr = curr->next;
  }
  if (curr->pre == NULL)
  {
    insertFromStart();
  }
  else if (curr->next == NULL)
  {
    insertFromEnd();
  }
  else
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\nEnter the valude of Node  : ");
    scanf("%d", &temp->data);

    temp->next = curr->next;
    temp->next->pre = temp;
    curr->next = temp;
    temp->pre = curr;
    display();
  }
}
void deleteFromStart()
{
  Node *curr = Head;
  Head = Head->next;
  Head->pre = NULL;
  curr = NULL;
  display();
}
void deleteFromEnd()
{
  Node *curr = Head;
  while (curr->next)
  {
    curr = curr->next;
  }
  curr->pre->next = NULL;
  curr = NULL;
  display();
}
void deleteFromAnyPosi()
{
  int posi;
  printf("\nEnter the position of Node you want to delete : ");
  scanf("%d", &posi);
  Node *curr = Head;
  while (--posi)
  {
    curr = curr->next;
  }
  if (curr->pre == NULL)
  {
    deleteFromStart();
  }
  else if (curr->next == NULL)
  {
    deleteFromEnd();
  }
  else
  {
    curr->pre->next = curr->next;
    curr->next->pre = curr->pre;
    curr = NULL;
    display();
  }
}
void main()
{

  printf("1.Insert From Start");
  printf("\n2.Insert From End");
  printf("\n3.Insert at any position ");
  printf("\n4.Delete From Start");
  printf("\n5.Delete From End");
  printf("\n6.Delete From Any Position");
  printf("\n7.Exit");
  int flag = 1;
  while (flag)
  {
    int choise;
    printf("\nEnter your choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      insertFromStart();
      break;
    case 2:
      insertFromEnd();
      break;
    case 3:
      insertAtAnyPosi();
      break;
    case 4:
      deleteFromStart();
      break;
    case 5:
      deleteFromEnd();
      break;
    case 6:
      deleteFromAnyPosi();
      break;
    case 7:
      flag = 0;
      break;
    default:
      printf("\nInvalid choise");
      break;
    }
  }
}