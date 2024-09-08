import java.util.*;
public class p11_Diamond_Star {
    public static void DiamondStar(int r){
        for(int i=1;i<=r;i++){
            for(int j=1;j<=(r-i);j++){
                System.out.print(" ");
            }
            for(int k=1;k<=2*i-1;k++){
                System.out.print("*");
            }
            System.out.println();
        }
        // 2nd half
        for(int i=r;i>=1;i--){
            for(int j=1;j<=(r-i);j++){
                System.out.print(" ");
            }
            for(int k=1;k<=2*i-1;k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows:");
        int rows = sc.nextInt();
        DiamondStar(rows);
        sc.close();
    }
}
