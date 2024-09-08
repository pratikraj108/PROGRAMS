import java.util.*;
public class p4_IvertedHalfNumPyramid{
    public static void IvertedHalfNumPyramid(int r){
        for(int i=1;i<=r;i ++){
            for(int j=1;j<=r-i+1;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows and colns:");
        int rows = sc.nextInt();
        IvertedHalfNumPyramid(rows);
        sc.close();
    }
}