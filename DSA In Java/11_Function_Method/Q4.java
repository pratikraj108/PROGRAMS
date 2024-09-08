import java.util.Scanner;

public class Q4 {
    public static int Sumdigit(int n){
        int sum=0;
        while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit;
        n/=10;
        }
        // System.out.println("Sum of the Digit is"+sum);
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
        int num=sc.nextInt();
        System.out.println(Sumdigit(num));
        sc.close();
    }
}
