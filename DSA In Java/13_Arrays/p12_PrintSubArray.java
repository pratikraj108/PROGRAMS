import java.util.*;
public class p12_PrintSubArray {
    public static void printfSubarray(int numbers[]){
        int totalSubarray=0; 
        for(int i=0;i<numbers.length;i++){  // for finding start
            int start=i;
            for(int j=i;j<numbers.length;j++){  // for finding end
                int end =j;
                for(int k=start;k<=end;k++){    // print element of sub array
                    System.out.print(numbers[k]+" ");   //subarray
                }
                totalSubarray++;
                System.out.println();
            }
            System.out.println();
        }
        System.out.println("Total Subarray="+totalSubarray);
    }    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int numbers[]=new int [n];
        System.out.println("Enter array elements:");
        for(int i=0;i<n ;i++){
            numbers[i]=sc.nextInt();
        }
    printfSubarray(numbers);
    }
}
 