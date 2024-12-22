#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *front = NULL, *rear = NULL;
void display()
{
  if (front == NULL)
  {
    printf("\nQueue is empty!!");
    return;
  }
  else
  {
    Node *temp = front;
    printf("\nData : ");
    while (temp)
    {
      printf(" %d -> ", temp->data);
      temp = temp->next;
    }
  }
}
void insert()
{
  if (front == NULL)
  {
    front = (Node *)malloc(sizeof(Node));
    printf("\nEnter data : ");
    scanf("%d", &front->data);
    front->next = NULL;
    rear = front;
  }
  else
  {
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("\nEnter data : ");
    scanf("%d", &newNode->data);
    rear->next = newNode;
    rear = newNode;
    newNode->next = NULL;
  }
  display();
}
void delete()
{
  if (front == NULL)
  {
    printf("Queue is empty!!");
    return;
  }
  else
  {
    Node *temp = front;
    front = front->next;
    free(temp);
  }
  display();
}
int main()
{
  int choise;
  printf("1.insert (equeue)");
  printf("\n2.delete (dequeue)");
  printf("\n3.display");
  printf("\n4.exit");
  while (1)
  {
    printf("\nEnter your choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("\nYou are now exited");
      exit(1);
      break;
    default:
      printf("\nInvalid choise ");
      break;
    }
  }
  return 0;
}