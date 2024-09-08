import java.util.Scanner;

public class Q3 {
    public static boolean Palindrome(int n) {
        int rev = 0;
        int original = n;
        while (n != 0) {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        if (original == rev) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no.to check Palindrome or Not:");
        int num = sc.nextInt();
        System.out.println(Palindrome(num));
        sc.close();
    }
}
