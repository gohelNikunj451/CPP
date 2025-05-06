#include <stdio.h>
#include <conio.h>
#include <malloc.h>

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
  }

  printf("%d -> %d edge successfully deleted", src, dest);
  printf("\n%d -> %d edge successfully deleted", dest, src);
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
  printf("\n1.insert Edge (src->dest)");
  printf("\n2.Print Graph");
  printf("\n3.delete Edges");
  printf("\n4.Exit");
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
      printf("\nExited...");
      break;
    default:
      printf("\nInvlid choice!!");
      break;
    }
  } while (ch != 4);
  return 0;
}