#include <stdio.h>
#include <conio.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

int isFull()
{
  if ((rear + 1) % SIZE == front)
  {
    return 1; // Queue is full
  }
  return 0; // Queue is not full
}

// Function to check if the queue is empty
int isEmpty()
{
  if (front == -1)
  {
    return 1; // Queue is empty
  }
  return 0; // Queue is not empty
}
// Function to display the elements of the queue
void display()
{
  if (isEmpty())
  {
    printf("\nQueue is empty\n");
  }
  else
  {
    printf("\nQueue elements: ");
    int i = front;
    while (i != rear)
    {
      printf("%d ", queue[i]);
      i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[rear]); // Print the last element (rear)
  }
}

// Function to insert an element into the queue
void insert(int value)
{
  if (isFull())
  {
    printf("\nQueue is full. Cannot enqueue %d\n", value);
  }
  else
  {
    if (front == -1)
    {
      front = 0; // First element inserted
    }

    rear = (rear + 1) % SIZE; // Circular increment
    queue[rear] = value;
    printf("\nEnqueued %d\n", value);
  }
}

// Function to delete an element from the queue
void delete()
{
  if (isEmpty())
  {
    printf("\nQueue is empty. Cannot dequeue\n");
  }
  else
  {
    int deletedValue = queue[front];
    if (front == rear)
    { // Only one element in the queue
      front = rear = -1;
    }
    else
    {
      front = (front + 1) % SIZE; // Circular increment
    }
    printf("\nDequeued %d\n", deletedValue);
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
    int temp;
    printf("\nEnter your choise : ");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:

      printf("\nEnter data : ");
      scanf("%d", &temp);
      insert(temp);
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