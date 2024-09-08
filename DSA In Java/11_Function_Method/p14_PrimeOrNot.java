import java.util.Scanner;

public class p14_PrimeOrNot {
    public static boolean isPrime(int n){ // method 1
    boolean isPrime=true;
    for(int i=2;i<n-1;i++){
    if(n%i==0){
    isPrime=false;
    break;
    }
    }
    return isPrime;
    }
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter no. to check prime or not:");
    int num=sc.nextInt();
    System.out.println(isPrime(num));
    sc.close();
    }
    }

//     public static boolean isPrime(int n) {
//         for (int i = 2; i < n - 1; i++) {
//             if (n % i == 0) {
//                 return false;               //method 2
//             }
//         }
//         return true;
//     }

//     public static void main(String[] args) {
//         System.out.println(isPrime(5));
//     }
// }