import java.util.*;
public class p5_FloydsTiangle {
    public static void FloydsTriangle(int r){
        int count=1;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=i;j++){
                System.out.print(count+" ");
                count++;
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows and colns:");
        int rows = sc.nextInt();
        FloydsTriangle(rows);
        sc.close();
    }
}
