//  Print the number of 7’s that are inthe 2d array
// Example :
//Input - int[][] array = { {4,7,8},{8,8,7} };
//Output - 2
public class q1 {
    public  static int Countof7(int arr[][]){
        int countOf7 = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                if (arr[i][j] == 7) {
                    countOf7++;
                }
            }
        }
        return countOf7;
    }
    public static void main(String[] args) {
        int arr[][]= { {4,7,8},{8,8,7} };
        System.out.println("count of 7 is : " +Countof7(arr));
    }
}