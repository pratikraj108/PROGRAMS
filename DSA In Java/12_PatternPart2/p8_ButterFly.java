import java.util.*;
public class p8_ButterFly {
    public static void ButterFly(int r){
        for(int i=1;i<=r;i++){
            // stars -- i
             for(int j=1;j<=i;j++){
                System.out.print("*");
             }
             //spaces  -- 2*(n-i)
             for(int j=1;j<=2*(r-i);j++){
                System.out.print(" ");
             }
             // stars -- i
             for(int j=1;j<=i;j++){
                System.out.print("*");
             }
             System.out.println();
        }
        // 2nd half
        for(int i=r;i>=1;i--){
            // stars -- i
             for(int j=1;j<=i;j++){
                System.out.print("*");
             }
             //spaces  -- 2*(n-i)
             for(int j=1;j<=2*(r-i);j++){
                System.out.print(" ");
             }
             // stars -- i
             for(int j=1;j<=i;j++){
                System.out.print("*");
             }
             System.out.println() ;

        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows:");
        int rows = sc.nextInt();
        ButterFly(rows);
        sc.close();
    }
}
