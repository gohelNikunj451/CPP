#include <stdio.h>
#include <conio.h>
#include <malloc.h>
// Queue Data Structure
struct NodeQ
{
  int data;
  struct NodeQ *next;
};
typedef struct NodeQ NodeQ;
NodeQ *front = NULL, *rear = NULL;

void push(int data)
{
  if (front == NULL)
  {
    front = (NodeQ *)malloc(sizeof(NodeQ));
    front->data = data;
    front->next = NULL;
    rear = front;
  }
  else
  {
    NodeQ *newNodeQ = (NodeQ *)malloc(sizeof(NodeQ));
    front->data = data;
    rear->next = newNodeQ;
    rear = newNodeQ;
    newNodeQ->next = NULL;
  }
}
int Front()
{
  if (front == NULL)
  {
    return NULL;
  }
  else
  {
    return front->data;
  }
}
int empty()
{
  if (front == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void pop()
{
  if (front == NULL)
  {
    return;
  }
  else
  {
    NodeQ *temp = front;
    front = front->next;
    free(temp);
  }
}
// Graph Data Structure
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

  printf("%d -> %d vertices are successfully connected", src, dest);
  printf("\n%d -> %d vertices are successfully connected", dest, src);

  return graph;
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
void BFS(Graph *newGraph)
{
  int *visited = (int *)malloc(newGraph->vertices * sizeof(int));
  for (int i = 0; i < newGraph->vertices; i++)
  {
    visited[i] = 0;
  }
  printf("\nBFS : ");
  push(0);
  visited[0] = 1;
  while (!empty())
  {
    int nodeData = Front();
    pop();
    printf(" %d", nodeData);
    Node *temp = newGraph->adjList[nodeData];
    while (temp)
    {
      if (!visited[temp->vertex])
      {
        visited[temp->vertex] = 1;
        push(temp->vertex);
      }
      temp = temp->next;
    }
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
  printf("\n3.BFS Traversal");
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
      BFS(newGraph);
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