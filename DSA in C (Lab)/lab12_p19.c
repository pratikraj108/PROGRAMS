// wap to convert adjacency matrix to adjacency list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printAdjacencyList(int **matrix, int n)
{
    struct Node **adjList = (struct Node **)malloc(n * sizeof(struct Node *));
    for (int i = 0; i < n; i++)
    {
        adjList[i] = NULL;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                // If there is an edge, add j to the adjacency list of i
                struct Node *new_node = newNode(j);
                new_node->next = adjList[i];
                adjList[i] = new_node;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Vertex %d: ", i);
        struct Node *temp = adjList[i];
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    // Dynamically allocate memory for the adjacency matrix
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printAdjacencyList(matrix, n);

    return 0;
}