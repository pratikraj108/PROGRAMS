import java.util.Scanner;

public class p8_Factorial {
    public static int fact(int n){
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        return f;  //factorial of n
    }
    public static void main(String[] args) {
        System.out.println("Enetr the number:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
       System.out.println("factorial is:"+fact(n));
       sc.close();
    }
}
