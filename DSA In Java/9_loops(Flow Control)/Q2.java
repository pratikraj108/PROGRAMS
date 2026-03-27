import java.util.*;
public class Q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter numbers(odd & even both)");
        int n = 1; // Initialize n to a non-zero value
        int evenSum=0;
        int oddSum=0;
        while(n != 0){
            System.out.println("Enter the number");
            n=sc.nextInt();
            if(n%2==0){
                evenSum=evenSum+n;
            }
            else{
                oddSum+=n;
            }
        }

        System.out.println("Sum of odd numbers: " + oddSum);
        System.out.println("Sum of even numbers: " + evenSum);
        sc.close();

    }
}
