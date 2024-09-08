import java.util.*;
public class p6_0_1_Triangle {
    public static void Zero_one_Triangle(int r){
        for(int i=1;i<=r;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0){
                    System.out.print("1");
                }
                else{
                    System.out.print("0");
                }
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows and colns:");
        int rows = sc.nextInt();
        Zero_one_Triangle(rows);
        sc.close();
    }
}
