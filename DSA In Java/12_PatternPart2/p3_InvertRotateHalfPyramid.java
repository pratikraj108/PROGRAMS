import java.util.*;

public class p3_InvertRotateHalfPyramid {
    public static void InvertRotateHalfPyramid(int r) {
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= r - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows and colns:");
        int rows = sc.nextInt();
        InvertRotateHalfPyramid(rows);
        sc.close();

    }
}
