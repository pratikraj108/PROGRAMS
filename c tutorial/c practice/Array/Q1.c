/*Given an array of marks of students,if the marks of any 10 student is less than 35 print its roll number
   [Here roll no. refers to index of the arrray.]*/
   #include<stdio.h>
   int main(){
    int marks[10];
    for(int i=0;i<=9;i++){
        printf("Enter the marks of students out of 100: ");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("Roll no. is %d\n:",i);
        }
       
    }
    return 0;
   }
