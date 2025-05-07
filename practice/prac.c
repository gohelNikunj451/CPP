#include <stdio.h>
#include <stdlib.h>
int *visited = NULL;
int **memoryAlloc(int **adjMatrix, int vertices)
{
  adjMatrix = (int **)malloc(sizeof(int *) * vertices);
  for (int i = 0; i < vertices; i++)
  {
    adjMatrix[i] = (int *)malloc(sizeof(int) * vertices);
  }
  return adjMatrix;
}
int **createGraph(int **adjMatrix, int vertices)
{
  if (adjMatrix != NULL)
  {
    printf("\nGraph is already created");
    return adjMatrix;
  }
  adjMatrix = memoryAlloc(adjMatrix, vertices);

  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      adjMatrix[i][j] = 0;
    }
  }
  printf("\nGraph created successfully");
  return adjMatrix;
}
int **insertEdges(int **adjMatrix, int vertices)
{
  int edges;
  int src, dest;
  printf("\nEnter no of edges : ");
  scanf("%d", &edges);
  for (int i = 1; i <= edges; i++)
  {
  A:
    printf("\nEnter src -> dest : ");
    scanf("%d %d", &src, &dest);

    if (src < 0 || dest < 0 || src >= vertices || dest >= vertices)
    {
      printf("\nInvalid src to dest");
      goto A;
    }
    adjMatrix[src][dest] = 1;
    adjMatrix[dest][src] = 1;
    printf("\n%d -> %d successfully linked", src, dest);
  }
  return adjMatrix;
}
int **deleteEdges(int **adjMatrix, int vertices)
{
  int src, dest;
A:
  printf("\nEnter src -> dest for delete() : ");
  scanf("%d %d", &src, &dest);
  if (src < 0 || dest < 0 || src >= vertices || dest >= vertices)
  {
    printf("\nInvalid src to dest");
    goto A;
  }
  adjMatrix[src][dest] = 0;
  adjMatrix[dest][src] = 0;
  printf("\n%d -> %d successfully deleted", src, dest);
  return adjMatrix;
}
void printAdjMatrix(int **adjMatrix, int vertices)
{
  printf("\nAdj Matrix : \n");
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      printf("%d ", adjMatrix[i][j]);
    }
    printf("\n");
  }
}
void BFS(int **adjMatrix, int vertices, int st)
{
  int *queue, *visited;
  queue = (int *)malloc(sizeof(int) * vertices);
  visited = (int *)malloc(sizeof(int) * vertices);
  for (int i = 0; i < vertices; i++)
  {
    visited[i] = 0;
  }
  int front, rear;
  int current;
  front = rear = 0;

  queue[rear++] = st;
  visited[st] = 1;

  printf("\nBFS : ");
  while (front < rear)
  {
    current = queue[front++];
    printf(" %d", current);
    for (int i = 0; i < vertices; i++)
    {
      if (adjMatrix[current][i] == 1 && visited[i] == 0)
      {
        visited[i] = 1;
        queue[rear++] = i;
      }
    }
  }
}
void DFS(int **adjMatrix, int vertices, int current)
{
  printf(" %d", current);
  visited[current] = 1;
  for (int i = 0; i < vertices;i++){
    if(adjMatrix[current][i]==1 && visited[i]==0){
      DFS(adjMatrix, vertices, i);
    }
  }
}
int main()
{
  int ch;
  int vertices;
  int **adjMatrix = NULL;
  printf("1.createGraph");
  printf("\n2.insertEdges");
  printf("\n3.deleteEdges");
  printf("\n4.printAdjMatrix");
  printf("\n5.BFS()");
  printf("\n6.DFS()");
  printf("\n7.Exited()");

  while (1)
  {
    printf("\nEnter choise : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("\nEnter no. of vertices : ");
      scanf("%d", &vertices);
      adjMatrix = createGraph(adjMatrix, vertices);
      break;
    case 2:
      adjMatrix = insertEdges(adjMatrix, vertices);
      break;
    case 3:
      adjMatrix = deleteEdges(adjMatrix, vertices);
      break;
    case 4:
      printAdjMatrix(adjMatrix,vertices);
      break;
    case 5:
      BFS(adjMatrix, vertices, 0);
      break;
    case 6:
      visited = (int *)malloc(sizeof(int) * vertices);
      for (int i = 0; i < vertices; i++)
      {
        visited[i] = 0;
      }
      printf("\nDFS : ");
      DFS(adjMatrix, vertices, 0);
      break;
    case 7:
      printf("\nExited...");
      break;
    default:
      printf("\nInvalid choise!!!");
      break;
    }
  }
  return 0;
}