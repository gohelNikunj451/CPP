#include <stdio.h>
#include <conio.h>
#define size 10
int front = -1, rear = -1;
int arr[size];
void insert()
{
  if (rear == size - 1)
  {
    printf("\nqueue is full");
    return;
  }
  else
  {
    if (front == -1)
    {
      front = 0;
    }
    printf("\nEnter data : ");
    scanf("%d", &arr[++rear]);
  }
}
void delete()
{
  if (front == -1 || front > rear)
  {
    printf("\nqueue is empty");
    front = rear = -1;
    return;
  }
  else
  {
    front++;
  }
}
void display()
{
  if (front == -1 || front > rear)
  {
    printf("\nqueue is empty");
    return;
  }
  else
  {
    printf("\nData : ");
    for (int i = front; i <= rear; i++)
    {
      printf(" %d ", arr[i]);
    }
  }
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