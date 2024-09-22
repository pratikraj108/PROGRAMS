import java.util.*;
public class p12B_PalindromicPattern {
    public static void PalindromicPattern(int r){
        //outer loop
     for(int i=1;i<=r;i++){
        //spaces
        for(int j=1;j<=r-i;j++){
            System.out.print(" ");
        }
        // decending number
        for(int j=i;j>=1;j--){
            System.out.print(j);
        }
        // ascending
        for(int j=2;j<=i;j++){
            System.out.print(j);
        }
        System.out.println( );
     }   
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows:");
        int rows = sc.nextInt();
        PalindromicPattern(rows);
        sc.close();
    }
}
