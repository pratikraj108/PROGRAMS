import java.util.*;
public class p1_HollowRect {
    public static void hollow_rect(int r,int c){
        // int r,c;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(i==1||i==r||j==1||j==c){
                    System.out.print("*");
                } 
                else{
                    System.out.print(" ");
                }

            }
            System.out.println();
        } 
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no.of rows and column:");
        int rows=sc.nextInt();
        int colns=sc.nextInt();
        hollow_rect(rows, colns);
        sc.close();
   }

}
