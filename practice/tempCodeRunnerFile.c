#include <stdio.h>
#include <stdlib.h>
#define INI_SIZE 1
int *Tree = NULL;
int size;
void createTree(int capacity)
{
    size = capacity;
    Tree = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        Tree[i] = -1;
    }
}
void resizeArr(int newSize)
{
    Tree = (int *)realloc(Tree, sizeof(int) * newSize);
    for (int i = size; i < newSize; i++)
    {
        Tree[i] = -1;
    }
    size = newSize;
}
void insert(int val)
{
    if (Tree == NULL)
    {
        createTree(INI_SIZE);
    }
    int i = 0;
    while (i < size && Tree[i] != -1)
    {
        if (Tree[i] > val)
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i + 2;
        }
        if (i >= size)
        {
            resizeArr(i + 1);
        }
    }
    Tree[i] = val;
    printf("\n%d is inserted at %d index", val, i);
}
void preorder(int i)
{
    if (i < size && Tree[i] != -1)
    {
        printf(" %d", Tree[i]);
        preorder(2 * i + 1);
        preorder(2 * i + 2);
    }
}
void inorder(int i)
{
    if (i < size && Tree[i] != -1)
    {
        inorder(2 * i + 1);
        printf(" %d", Tree[i]);
        inorder(2 * i + 2);
    }
}
void postorder(int i)
{
    if (i < size && Tree[i]!=-1)
    {
        postorder(2 * i + 1);
        postorder(2 * i + 2);
        printf(" %d", Tree[i]);
    }
}
int main()
{
    int ch, val;
    printf("\n1.Insert");
    printf("\n2.Preorder");
    printf("\n3.Inorder");
    printf("\n4.Postorder");
    printf("\n5.Show Parent-Child Relation");
    printf("\n6.Exit");

    while (1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter value : ");
            scanf("%d", &val);
            insert(val);
            break;
        case 2:
            printf("Preorder : ");
            preorder(0);
            break;
        case 3:
            printf("Inorder : ");
            inorder(0);
            break;
        case 4:
            printf("Postorder : ");
            postorder(0);
            break;
        case 5:
            // showRelation();
            break;
        case 6:
            printf("\nExited...");
            exit(1);
            break;
        default:
            printf("\nInvalid choice!!");
            break;
        }
    }
}