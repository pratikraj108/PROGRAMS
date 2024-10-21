import java.util.*;
import java.util.Scanner;

public class p9p10_CountingSort {
    public static void countingShort(int arr[]){
        int largest=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            largest=Math.max(largest, arr[i]);
        }
        int count[]=new int [largest+1];
        for(int i=0;i<arr.length;i++){
            count[arr[i]]++;
        }
        //sorting 
        int j=0;
        for(int i=0;i<count.length;i++){
            // for(int i=count.length-1;i>=0;i--){    // for descending 
            while(count[i]>0){
                arr[j]=i;
                j++;
                count[i]--;
            }
        }
    }
    public static void printArr(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        } 
        System.out.println();
    }
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int nums=sc.nextInt();
        int arr[]=new int [nums];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<nums;i++){
            arr[i]=sc.nextInt();
        }
        countingShort(arr);
        printArr(arr);
    }
}
