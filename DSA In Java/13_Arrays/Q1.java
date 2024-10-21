
// Given an integer array nums, return true if any value appears at least twice in the  array, and return false if every element is distinct. 
// Example 1: 
// Input: nums = [1, 2, 3, 1] 
// Output: true 
// Example 2: 
// Input: nums = [1, 2, 3, 4] 
// Output: false 
// Example 3: 
// Input: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2] 
// Output: true 
// Constraints: 
// •  1 <= nums . lengtth <= 10^5 
// •  -109 <= nums [ i ] <= 10^9
import java.util.*;

public class Q1 {
    public static boolean ValueChecker(int nums[]) {
        // int count=0;
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n = sc.nextInt();
        int nums[] = new int[n];
        System.out.println("Enter array element:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        System.out.println(ValueChecker(nums));
    }
}
 