import java.util.*;

public class p8_BinarySearch {
     public static int BinarySearch(int num[],int key){
        int start=0;
        int end=num.length -1;

        while(start <= end ){
            int mid=(start+end)/2;
            //comparision
            if(num[mid] == key){    //found
                return mid;
            }
            if(num[mid]<key){   // right
                start=mid+1;
            }else{    // left
                end=mid-1;
            }
        }
        return -1;
     }
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int num[]=new int[n];
        System.out.println("Enter array elements:");
        for(int i=0;i<n;i++){
            num[i]=sc.nextInt();
        }
        System.out.println("enter key element");
        int key=sc.nextInt();
        System.out.println("Index for key is"+BinarySearch(num, key));
        sc.close();
     }
}
