#include <stdio.h>
#include <stdlib.h>
int *visitedDFS = NULL;
int **spaceAllocation(int vertices)
{
  // memory allocation
  int **adjMatrix = (int **)malloc(vertices * (sizeof(int *)));
  for (int i = 0; i < vertices; i++)
  {
    adjMatrix[i] = (int *)malloc(vertices * (sizeof(int)));
  }

  return adjMatrix;
}

int **createGraph(int **adjMatrix, int vertices)
{
  if (adjMatrix != NULL)
  {
    printf("\n Graph is already created !!");
    return adjMatrix;
  }
  adjMatrix = spaceAllocation(vertices);

  // asing  value to all 0
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      adjMatrix[i][j] = 0;
    }
  }
  printf("\nGraph successfully created :)");
  // printf("\n %u", adjMatrix);
  // printf("\n %u", *adjMatrix);
  // printf("\n %u", **adjMatrix);
  // printf("\n %u", &adjMatrix);
  // printf("\n %u", &*adjMatrix);
  // printf("\n %u", &**adjMatrix);

  return adjMatrix;
}
int **addEdges(int **adjMatrix, int vertices)
{
  int edges;
  int src, dest;
  printf("\nEnter no. of edges : ");
  scanf("%d", &edges);
  for (int i = 0; i < edges; i++)
  {
    printf("\nEnter src -> dest : ");
    scanf("%d %d", &src, &dest);
    if (src < 0 || dest < 0 || src >= vertices || dest >= vertices)
    {
      printf("\nInvalid src or des");
      i--;
    }
    else
    {
      adjMatrix[src][dest] = 1;
      adjMatrix[dest][src] = 1;
    }
  }
  printf("\nIn graph all edges connected to vertices :)");
  return adjMatrix;
}
int **deleteEdges(int **adjMatrix, int vertices)
{
  int src, dest;
  printf("\nEnter Edge SRC -> DEST you want to delete : ");
  scanf("%d %d", &src, &dest);
  if (src < 0 || dest < 0 || src >= vertices || dest >= vertices)
  {
    printf("\nInvalid SRC or DEST!!");
  }
  else
  {
    adjMatrix[src][dest] = 0;
    adjMatrix[dest][src] = 0;
    printf(" %d -> %d edge delete successfulluy", src, dest);
  }

  return adjMatrix;
}
void BFS(int **adjMatrix, int vertices, int startIndex)
{
  int current;
  int *queue = (int *)malloc(sizeof(int) * vertices);
  int *visited = (int *)malloc(sizeof(int) * vertices);
  int rear, front;
  rear = front = 0;

  for (int i = 0; i < vertices; i++)
  {
    visited[i] = 0;
  }

  printf("\n BFS Traversal : ");

  queue[rear++] = startIndex;
  visited[startIndex] = 1;

  while (front < rear)
  {
    current = queue[front++];
    printf("%2d", current);
    for (int i = 0; i < vertices; i++)
    {
      if (adjMatrix[current][i] == 1 && visited[i] == 0)
      {
        queue[rear++] = i;
        visited[i] = 1;
      }
    }
  }
}
void DFS(int **adjMatrix, int vertices, int current)
{
  printf("%2d", current);
  visitedDFS[current] = 1;
  for (int i = 0; i < vertices; i++)
  {
    if (adjMatrix[current][i] == 1 && visitedDFS[i] == 0)
    {
      DFS(adjMatrix, vertices, i);
    }
  }
}
void printAdjMatrix(int **adjMatrix, int vertices)
{
  printf("\nAdj. Matrix of Graph : \n");
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      printf("%3d", adjMatrix[i][j]);
    }
    printf("\n");
  }
}
void printGraph(int **adjMatrix, int vertices)
{
  printf("\nGraph : \n");
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      if (adjMatrix[i][j] == 1)
      {
        printf(" %d -> %d\n", i, j);
      }
    }
  }
}

int main()
{
  int ch, vertices;
  int **adjMatrix = NULL;
  printf("\n1.Create Graph");
  printf("\n2.Add edges");
  printf("\n3.Delete Edges");
  printf("\n4.Print AdjMatrix");
  printf("\n5.print Graph");
  printf("\n6.BFS traversal");
  printf("\n7.DFS traversal");
  printf("\n8.Exited..");

  while (1)
  {
    printf("\nEnter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("Enter no. of vertex : ");
      scanf("%d", &vertices);
      adjMatrix = createGraph(adjMatrix, vertices);
      break;
    case 2:
      adjMatrix = addEdges(adjMatrix, vertices);
      break;
    case 3:
      adjMatrix = deleteEdges(adjMatrix, vertices);
      break;
    case 4:
      printAdjMatrix(adjMatrix, vertices);
      break;
    case 5:
      printGraph(adjMatrix, vertices);
      break;
    case 6:
      BFS(adjMatrix, vertices, 4);
      break;
    case 7:
      visitedDFS = (int *)malloc(sizeof(int) * vertices);
      for (int i = 0; i < vertices; i++)
      {
        visitedDFS[i] = 0;
      }
      printf("\nDFS : ");
      DFS(adjMatrix, vertices, 0);
      break;
    case 8:
      printf("\nExited...");
      exit(1);
      break;
    default:
      printf("\nInvalid choise");
      break;
    }
  }
  return 0;
}