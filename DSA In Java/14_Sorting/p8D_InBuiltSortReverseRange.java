import java.util.Arrays;
import java.util.*;
import java.util.Collections;
public class p8D_InBuiltSortReverseRange {
    public static void InsertionSort(Integer arr[]){
        for(int i=1; i<arr.length;i++){
            int curr= arr[i];
            int prev= i-1;
            //finding out the correct pos to insert
            while(prev>=0 && arr[prev]>curr){  // backtrack
                arr[prev+1]=arr[prev];      // for decending order   
                prev--;                     // arr[prev]<curr;
            }
            // insertion
            arr[prev+1]= curr;
        }
    }
    public static void printArr(Integer arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        } 
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int nums=sc.nextInt();
        Integer arr[]=new Integer [nums];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<nums;i++){
            arr[i]=sc.nextInt();
        }
        // InsertionSort(arr);
        // Arrays.sort(arr);
        // Arrays.sort(arr, 0 , 3);
        Arrays.sort(arr,0,3, Collections.reverseOrder());
        printArr(arr);
    }
}
