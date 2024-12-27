// Write a program to traverse a tree. functions to generate, inorder, preorder, postorder, and delete a tree.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node *left;
    struct node *right;
};

void generate(struct node **, int);
void inorder(struct node *);
void postorder(struct node *);
void preorder(struct node *);
void deleteTree(struct node **);

int main() {
    struct node *head = NULL;
    int choice = 0, num;

    printf("\nMenu:\n1. Insert\n2. Traverse via inorder\n3. Traverse via preorder\n4. Traverse via postorder\n5. Exit\n");

    while (1) {
        printf("\nEnter your choice (or -1 to quit): ");
        scanf("%d", &choice);

        if (choice == -1) {
            printf("Exiting...\n");
            break; 
        }

        switch (choice) {
            case 1:
                while (1) {
                    printf("Enter element to insert: ");
                    scanf("%d", &num);
                    if (num == -1) break;  
                    generate(&head, num);
                }
                break;
            case 2:
                if (head == NULL)
                    printf("Tree is empty!\n");
                else
                    inorder(head);
                break;
            case 3:
                if (head == NULL)
                    printf("Tree is empty!\n");
                else
                    preorder(head);
                break;
            case 4:
                if (head == NULL)
                    printf("Tree is empty!\n");
                else
                    postorder(head);
                break;
            case 5:
                deleteTree(&head);
                printf("Memory Cleared\nPROGRAM TERMINATED\n");
                break;
            default:
                printf("Not a valid input, try again\n");
        }

        if (choice == 5) {
            break;
        }
    }

    return 0;
}

void generate(struct node **head, int num) {
    struct node *temp = *head, *prev = *head;

    if (*head == NULL) {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = num;
        (*head)->left = (*head)->right = NULL;
    } else {
        while (temp != NULL) {
            prev = temp;
            if (num > temp->a) {
                temp = temp->right;
            } else {
                temp = temp->left;
            }
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = num;
        temp->left = temp->right = NULL;

        if (num >= prev->a) {
            prev->right = temp;
        } else {
            prev->left = temp;
        }
    }
}

void inorder(struct node *head) {
    if (head) {
        inorder(head->left);
        printf("%d   ", head->a);
        inorder(head->right);
    }
}

void preorder(struct node *head) {
    if (head) {
        printf("%d   ", head->a);
        preorder(head->left);
        preorder(head->right);
    }
}

void postorder(struct node *head) {
    if (head) {
        postorder(head->left);
        postorder(head->right);
        printf("%d   ", head->a);
    }
}

void deleteTree(struct node **head) {
    if (*head != NULL) {
        deleteTree(&(*head)->left);
        deleteTree(&(*head)->right);
        free(*head);
        *head = NULL; 
    }
}
