import java.util.*;

public class p4p5_SelectionSort {
    public static void SelectionSort(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {   //turns count 
            int MinPos = i;                          // min Position ko current position maan liya hai   
            for (int j = i + 1; j < arr.length; j++) {         // unsorted part me se min dhundh rahe hai
                if (arr[MinPos] > arr[j]) {            //arr[MinPos] < arr[j]   it  gives descending sorted arr         
                    MinPos = j;  
                }
            }
            // swap
            int temp = arr[MinPos];
            arr[MinPos] = arr[i];            // min swap with current pos
            arr[i] = temp;
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
        System.out.println("Enter the size of arr:");
        int n=sc.nextInt();
        int arr[]=new int [n];
        System.out.println("Enter the array element:");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println();
        SelectionSort(arr);
        printArr(arr); 
    }
}
  // time complexity   =   O(n^2)