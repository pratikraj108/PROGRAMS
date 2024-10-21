import java.util.*;

public class p15_Kadane_sAlgorith {
    public static void kedane(int numbers[]) {
        int MaxSum = Integer.MIN_VALUE;
        int currSum = 0;
        int MaxElemet = Integer.MIN_VALUE;
        for (int i = 0; i < numbers.length; i++) {
            currSum = currSum + numbers[i];// to track the max element inn arrr
            // check if curr element is greater than the maxElement
            MaxElemet = Math.max(MaxElemet, numbers[i]);

            if (currSum < 0) {
                currSum = 0;
            }
            MaxSum = Math.max(currSum, MaxSum);
            // fxn of Math hai, jo bhi max hoga currSum Ya maxsum
            // o maxsun me store ho jayega
        }
        if (MaxElemet < 0) {
            System.out.println("Our Max Subarray is:" + MaxElemet);
        } else {
            System.out.println("Our max subarray sum is:" + MaxSum);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n = sc.nextInt();
        int numbers[] = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }
        System.out.println();
        kedane(numbers);
    }
}
