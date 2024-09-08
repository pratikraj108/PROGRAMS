import java.util.*;
public class p9_Rhombus {
    public static void Rhombus(int r){
        for(int i=1;i<=r;i++){
            //spaces
            for(int j=1;j<=(r-i);j++){
                System.out.print(" ");
            }

            //stars
            for(int j=1;j<=r;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows:");
        int rows = sc.nextInt();
        Rhombus(rows);
        sc.close();
    }
}
 