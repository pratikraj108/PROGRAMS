//*WAP to implement insertion and deletion operation in a queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void insert();
void delete ();
void display();


int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
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
            printf("Exiting from the program\n");
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

void insert()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        int x;
        printf("Enter the value: ");
        scanf("%d", &x);
        newNode->data = x;
        newNode->next = NULL;
        if (front == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }  
}

void delete ()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        printf("The deleted item is:%d",front-> data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

