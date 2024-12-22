#include <stdio.h>
#include <conio.h>
#define size 5
int front = -1, rear = -1;
int arr[size];
int isEmpty()
{
  return front == -1;
}
int isFull()
{
  return (rear + 1) % size == front;
}
void display()
{
  if (isEmpty())
  {
    printf("\nQueue is empty !!");
    return;
  }
  printf("\nQueue element : ");
  int i = front;
  while (i != rear)
  {
    printf(" %d", arr[i]);
    i = (i + 1) % size;
  }
  printf(" %d", arr[i]);
}
void insert()
{
  if (isFull())
  {
    printf("\nQueue is full !!");
    return;
  }
  if (front == -1)
  {
    front = 0;
  }
  rear = (rear + 1) % size;
  printf("\nEnter data : ");
  scanf("%d", &arr[rear]);
  display();
}

void delete()
{
  if (isEmpty())
  {
    printf("\nQueue is empty !!");
    return;
  }
  if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    front = (front + 1) % size;
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