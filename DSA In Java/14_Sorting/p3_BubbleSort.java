import java.util.*;

public class p3_BubbleSort {

    public static void bubbleSort(int arr[]){
        int swap=0; 
        for(int turn=0;turn<arr.length-1;turn++){
            for(int j=0;j<arr.length-1-turn;j++){
                // for(int j=0;j<=arr.length-2-turn;j++)
                if(arr[j]>arr[j+1]){    // if(arr[i]<arr[j+1])  for descending
                    //swap
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp; 
                    swap++;
                }
            }
        }
        System.out.println("Total No. of Swaping are:"+swap);
    }
    public static void printArr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of arr:");
        int n=sc.nextInt();
        int arr[]=new int [n];
        System.out.println("Enter the array element:");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println();
        bubbleSort(arr);
       printArr(arr);

    }
}
// time complexity =  O(n^2)