import java.util.Scanner;

public class Q2 {
    public static boolean Even(int n){
        if(n%2==0){
        return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no. to check even or not:");
        int num=sc.nextInt();
        System.out.println(Even(num));
        sc.close();
    }
}
