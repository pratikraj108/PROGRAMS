import java.util.*;

public class p6_linearSearch {
    public static int linearSearch(int numbers[],int key){
        for(int i=0 ; i<numbers.length;i++){
            if(numbers[i]==key){
                return i;
            }
        }
        return -1;  //  key does not exit
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int numbers[]=new int [n];
        System.out.println("Enter array elements:");
        for(int i=0;i<n;i++){
            numbers[i]=sc.nextInt();
        }
        System.out.println("Enter key element: ");  
        int key=sc.nextInt();
        int index=linearSearch(numbers,key );
        if(index== -1){
            System.out.println("Not found");
        }else{
            System.out.println("key us at index : "+index);
        }
        sc.close();
    }
    
}
