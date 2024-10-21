import java.util.*;
public class p13_MaxSubarraySum {
    public static void MaxSubarray(int numbers[]){
        int currSum=0;
        int maxsum= Integer.MIN_VALUE;
        for(int i=0;i<numbers.length;i++){  // for finding start
            int start=i; 
            for(int j=i;j<numbers.length;j++){  // for finding end
                int end =j;
                currSum=0;
                for(int k=start;k<=end;k++){    // print element of sub array
                    // System.out.print(numbers[k]+" ");   //subarray
                    currSum+=numbers[k];
                }
                System.out.println(currSum);
                if(maxsum<currSum){
                    maxsum=currSum;                                                         
                }
            }
        }
        System.out.println("Max Sum="+maxsum);
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
        System.out.println();
    MaxSubarray(numbers);
    }
}
