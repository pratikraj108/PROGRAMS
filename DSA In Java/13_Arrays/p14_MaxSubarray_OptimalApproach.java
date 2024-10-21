import java.util.*;

public class p14_MaxSubarray_OptimalApproach {
    public static void pefixSum(int numbers[]) {
        int currSum = 0;
        int maxsum = Integer.MIN_VALUE;
        int prefix[] = new int[numbers.length];
        prefix[0] = numbers[0];
        // calculate prefix array
        for (int i = 1; i < prefix.length; i++) {
            prefix[i] = prefix[i - 1] + numbers[i];
        }

        for (int i = 0; i < numbers.length; i++) { // for finding start
            int start = i;
            for (int j = i; j < numbers.length; j++) { // for finding end
                int end = j;
                currSum = 0;

                currSum = start == 0 ? prefix[end] : prefix[end] - prefix[start - 1];
                if (maxsum < currSum) {
                    maxsum = currSum;
                }
            }
        }
        System.out.println("Max Sum=" + maxsum);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n = sc.nextInt();
        int numbers[] = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }
        System.out.println();
        pefixSum(numbers);
    }
}
