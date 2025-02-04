
    #include<stdio.h>
int main(){
    int n,m;
    printf("Enter the no. of rows");
    scanf("%d",&n);
     //printf("Enter the no. of column");
   // scanf("%d",&m);
    for(int i=0;i<n;i++){                            
        for(int j=0;j<n-1-i;j++){                    
            printf(" ");                             
        }                                            
       
    for(int i=0;i<n;i++){
       // for(int j=1;j<=n;j++){
            printf("*");
        
        }
        printf("\n");
    }  
                                                 
   return 0;                                         
}
