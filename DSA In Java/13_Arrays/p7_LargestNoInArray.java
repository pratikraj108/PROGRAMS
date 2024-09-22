import java.util.*;
public class p7_LargestNoInArray {
    public static int GetLargest(int num[]){
        int largest=Integer.MIN_VALUE; // - infinity
        int smallest=Integer.MAX_VALUE;  // +infinity
        for(int i=0;i<num.length ;i++){
            if(largest<num[i]){
                largest=num[i];
            }
            if(smallest>num[i]){
                smallest=num[i];
            }
        }
        System.out.println("Smallest value is"+smallest);
        return largest;    //  return ek hi ho sakta hai therefore smallest ko upar hi call kardiya
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int num[]=new int [n];
        System.out.println("Enter array elements:");
        for(int i=0;i<n;i++){
            num[i]=sc.nextInt();
        }
        System.out.println("largest value is:"+ GetLargest(num));
        sc.close();
    }
}