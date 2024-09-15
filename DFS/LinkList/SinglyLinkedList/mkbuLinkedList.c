#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;
Node *Head = NULL;
void create() // for create Linked List
{

  if (Head == NULL)
  {
    int temp_data;
    printf("\n Enter the data of NOde  : ");
    scanf("%d", &temp_data);
    Head = (Node *)malloc(sizeof(Node));
    Head->data = temp_data;
    Head->next = NULL;
  }
  else
  {
    printf("\n Linked List is already created");
  }
}

void insertNode() // insert Node
{
  printf("\n 1.insert At Start");
  printf("\n 2.insert At End");
  printf("\n 3.insert At any position ");

  int ch;
  printf("\n Enter your choise : ");
  scanf("%d", &ch);

  if (ch == 1) // insert Node at first position in the Linked List
  {
    Node *temp = (Node *)malloc(sizeof(Node));
    printf("\n Enter data : ");
    scanf("%d", &temp->data);
    temp->next = Head;
    Head = temp;
  }
  else if (ch == 2) // insert Node at end position in the Linked List
  {
    Node *curr = Head;
    while (curr->next)
    {
      curr = curr->next;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    curr->next = temp;
    printf("\n Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
  }
  else if (ch == 3) // insert Node at any position in the Linked List
  {
    int posi;
    printf("\n Enter position as you want : ");
    scanf("%d", &posi);

    Node *curr = Head;
    while (--posi)
    {
      curr = curr->next;
    }
    Node *temp = (Node *)malloc(sizeof(Node)); // for create Node with help of malloc ( memory allocation )
    printf("\n Enter the data : ");
    scanf("%d", &temp->data);
    temp->next = curr->next;
    curr->next = temp;
  }
  else
  {
    printf("\n Invalid Selecition");
  }
}
void deleteNode() // for delete Node
{
  printf("\n 1.delete At Start");
  printf("\n 2.delete At End");
  printf("\n 3.delete At any position ");
  int ch;
  printf("\n Enter your choise : ");
  scanf("%d", &ch);
  if (ch == 1) // delete Node at First Position in Linked List
  {
    Node *temp = Head;
    Head = Head->next;
    temp = NULL;
  }
  else if (ch == 2) // delete Node at End Position in Linked List
  {
    Node *curr = Head;
    Node *pre = curr;
    while (curr->next)
    {
      pre = curr;
      curr = curr->next;
    }
    pre->next = NULL;
    curr = NULL;
  }
  else if (ch == 3) // delete Node at any position in Linked List
  {
    int posi;
    printf("\n Enter the position as you want : ");
    scanf("%d", &posi);
    Node *curr = Head;
    Node *pre = curr;
    while (--posi)
    {
      pre = curr;
      curr = curr->next;
    }
    pre->next = curr->next;
    curr = NULL;
  }
  else
  {
    printf("\n Invalid choise");
  }
}
void display() // display Node in Linked List
{
  Node *temp = Head;
  printf("\n --> Data : ");
  while (temp)
  {
    printf(" %d", temp->data);
    temp = temp->next;
  }
}
int main()
{
  int ch;
  int flag = 1;
  while (flag)
  {
    printf("\n 1.create");
    printf("\n 2.insert Node");
    printf("\n 3.Delete Node");
    printf("\n 4.exit");
    printf("\n Enter the choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      create();
      break;
    case 2:
      insertNode();
      break;
    case 3:
      deleteNode();
      break;
    case 4:
      flag = 0;
      printf("\n You now exited");
      break;
    default:
      printf("\n Individual Choice");
      break;
    }
    display();
  }
  return 0;
}