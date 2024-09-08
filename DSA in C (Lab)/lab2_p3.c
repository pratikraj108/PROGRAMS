#include<stdio.h>
    void push(int x);
    void pop();
    void peek();
    void exit();
    int top=-1;
    int arr[10];
    int main(){
        int n,choice;
        do{
            printf("Enetr your choice:\n1.Push\n2.Pop\n3.Peek\n4.exit\n");
            scanf("%d",&choice);  
        switch (choice){
                case 1:
                printf("Enter the value to be pushed:\n");
                scanf("%d",&n);
                    push(n);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:exit();
                break;
                default: printf("Invalid choice\n");
            }
        }while(choice!=4);
        return 0;
    }
    void push(int x){
        if(top==9){
            printf("Overflow\n");
        }
        else{
            top=top+1;
            arr[top]=x;
            printf("element pushed successfully\n");
            for(int i=0;i<=top;i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
    }
    void pop(){
        int y;
        if(top==-1){
            printf("Underflow\n");
        }
        else{
            y=arr[top];
            top=top-1;
            printf("Element %d popped sucessfully:\n",y);
            for(int i=0;i<=top;i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
    }
    void peek(){
            printf("The top element is:%d\n",arr[top]);
        }