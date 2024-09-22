#include <stdio.h>

void insert();
void delete();
void display();
int queue[3];
int front = -1, rear = -1;

int main()
{
    int choice;
    do
    {
        printf("\nEnter your choice:\n1.Insert an Element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("You have entered a wrong choice\n");
        }
    } while (choice != 4);
    return 0;
}

void insert()
{
    int n;
    if (rear == 3 - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter element to insert: ");
        scanf("%d", &n);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = n;
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("Deleted item is: %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;  
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The queue is:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
