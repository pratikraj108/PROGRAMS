import java.util.Scanner;

public class p10_ReverseAnArray {
     public static void Reverse(int nums[]){
        int first=0, last=nums.length-1;
        while(first<last){
            //swap
            int temp=nums[last];
            nums[last]=nums[first];
            nums[first]=temp;

            first++;
            last--;  

        }
     }
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int nums[]=new int [n];
        System.out.println("Enter array element:");
        for(int i=0;i<n;i++){
            nums[i]=sc.nextInt();
        }
        Reverse(nums);
        System.out.println("Reverse array is:");
        for(int i=0;i<nums.length;i++){
            System.out.println(nums[i]+" ");
        }
        System.out.println();
        sc.close();
     }
}
