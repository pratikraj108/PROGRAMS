import java.util.*;
public class p15_primeOrnot {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter number to check it's prime or not");
        int n=sc.nextInt();

        int i;
        for(i=2;i<=n;i++){
            if(n%i==0)
            break;
        }
        if(i==n){
            System.out.println("nUMBER IS PRIME");
        }
        else{
            System.out.println("Not Prime");
        }
        sc.close();
    }
}
