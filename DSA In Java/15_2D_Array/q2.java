/*
  Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
 Example :
 Input - int[][] nums = { {1,4,9},{11,4,3},{2,2,3} };
 Output - 18
 */
public class q2 {

    public static int Sum(int nums[][]){
        int sum = 0;
        //sum of 2nd row elements
        for(int j=0; j<nums[0].length; j++) {
        sum += nums[1][j];
        }
        return sum;
    }
    public static void main(String[] args) {
        int[][] nums = { {1,4,9},{11,4,3},{2,2,3} };
        System.out.println("sum is : " +Sum(nums));
    }
}