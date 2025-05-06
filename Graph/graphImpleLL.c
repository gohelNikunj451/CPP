#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int *visitedDFS = NULL;
struct Node
{
  int vertex;
  struct Node *next;
};
typedef struct Node Node;
struct Graph
{
  int vertices;
  Node **adjList;
};
typedef struct Graph Graph;
Node *createNode(int vertex)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->vertex = vertex;
  newNode->next = NULL;
  return newNode;
}
Graph *createGraph(int vertices)
{
  Graph *newGraph = (Graph *)malloc(sizeof(Graph));
  newGraph->vertices = vertices;
  newGraph->adjList = (Node **)malloc(vertices * sizeof(Node *));
  for (int i = 0; i < vertices; i++)
  {
    newGraph->adjList[i] = NULL;
  }
  return newGraph;
}
Graph *addEdge(Graph *graph)
{
  int src, dest;
  printf("Enter src : ");
  scanf("%d", &src);
  printf("Enter dest : ");
  scanf("%d", &dest);

  if (src >= graph->vertices || dest >= graph->vertices || src < 0 || dest < 0)
  {
    printf("\nInvlid SRC or DEST ");
    return graph;
  }
  // directed Graph
  Node *newNode = createNode(dest);
  if (graph->adjList[src] == NULL)
  {
    graph->adjList[src] = newNode;
  }
  else
  {
    Node *temp = graph->adjList[src];
    while (temp->next)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  // undirected Graph
  newNode = createNode(src);
  if (graph->adjList[dest] == NULL)
  {
    graph->adjList[dest] = newNode;
  }
  else
  {
    Node *temp = graph->adjList[dest];
    while (temp->next)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  printf("%d -> %d edges are successfully connected", src, dest);
  printf("\n%d -> %d edges are successfully connected", dest, src);

  return graph;
}
void deleteEdge(Graph *graph)
{
  int src, dest;
  printf("\nEnter delete() src -> dest : ");
  scanf("%d %d", &src, &dest);

  // Boundary check
  if (src >= graph->vertices || dest >= graph->vertices || src < 0 || dest < 0)
  {
    printf("\nInvalid SRC or DEST");
    return;
  }

  // ---------- Delete dest from src's list ----------
  Node *temp = graph->adjList[src];
  Node *prev = NULL;
  while (temp != NULL && temp->vertex != dest)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp != NULL)
  {
    if (prev == NULL)
    {
      graph->adjList[src] = temp->next;
    }
    else
    {
      prev->next = temp->next;
    }
    free(temp);
  }

  // ---------- Delete src from dest's list ----------
  temp = graph->adjList[dest];
  prev = NULL;
  while (temp != NULL && temp->vertex != src)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp != NULL)
  {
    if (prev == NULL)
    {
      graph->adjList[dest] = temp->next;
    }
    else
    {
      prev->next = temp->next;
    }
    free(temp);
    printf("%d -> %d edge successfully deleted", src, dest);
    printf("\n%d -> %d edge successfully deleted", dest, src);
  }
  else
  {
    printf("%d -> %d edge is Invalid", src, dest);
    printf("\n%d -> %d edge is Invalid", dest, src);
  }
}

void BFS(Graph *graph)
{
  int current;
  int front, rear;
  front = rear = 0;
  int *visited = (int *)malloc(sizeof(int) * graph->vertices);
  for (int i = 0; i < graph->vertices; i++)
  {
    visited[i] = 0;
  }

  int *queue = (int *)malloc(sizeof(int) * graph->vertices);
  int st = 0;

  queue[rear++] = st;
  visited[st] = 1;
  printf("\nBFS Traversal : ");
  while (front < rear)
  {
    current = queue[front++];
    Node *temp = graph->adjList[current];
    printf(" %2d", current);
    while (temp)
    {

      if (temp->vertex != NULL && visited[temp->vertex] == 0)
      {
        queue[rear++] = temp->vertex;
        visited[temp->vertex] = 1;
      }
      temp = temp->next;
    }
  }
}
void DFS(Graph *graph, int current)
{
  printf("%2d", current);
  visitedDFS[current] = 1;
  Node *temp = graph->adjList[current];
  while (temp)
  {
    if (temp->vertex != NULL && visitedDFS[temp->vertex] == 0)
    {
      DFS(graph, temp->vertex);
    }
    temp = temp->next;
  }
}
void printGraph(Graph *graph)
{
  Node *temp;
  printf("\nGraph : ");
  for (int i = 0; i < graph->vertices; i++)
  {
    temp = graph->adjList[i];
    printf("\nvetex %d : ", i);
    while (temp)
    {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }
    printf("NULL");
  }
}
int main()
{
  int vertices;
  printf("\nEnter No. of vertices : ");
  scanf("%d", &vertices);
  Graph *newGraph = createGraph(vertices);
  printf("\nGraph is successfully created :) \n");
  printf("\n1.insert Edge (src->dest)");
  printf("\n2.Print Graph");
  printf("\n3.delete Edges");
  printf("\n4.BFS Traversal");
  printf("\n5.DFS Traversal");
  printf("\n6.Exit");
  int ch;
  do
  {
    printf("\n\nEnter Your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      addEdge(newGraph);
      break;
    case 2:
      printGraph(newGraph);
      break;
    case 3:
      deleteEdge(newGraph);
      break;
    case 4:
      BFS(newGraph);
      break;
    case 5:
      visitedDFS = (int *)malloc(sizeof(int) * vertices);
      for (int i = 0; i < vertices; i++)
      {
        visitedDFS[i] = 0;
      }
      printf("\nDFS : ");
      DFS(newGraph, 0);
      break;
    case 6:
      printf("\nExited...");
      break;
    default:
      printf("\nInvlid choice!!");
      break;
    }
  } while (ch != 6);
  return 0;
}