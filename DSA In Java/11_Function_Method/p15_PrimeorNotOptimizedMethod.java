import java.util.Scanner;

public class p15_PrimeorNotOptimizedMethod {
    public static boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false; // method 2
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. to check prime or not:");
        int num = sc.nextInt();
        System.out.println(isPrime(num));
        sc.close();
    }
}
