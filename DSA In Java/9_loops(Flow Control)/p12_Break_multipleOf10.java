import java.util.*;
public class p12_Break_multipleOf10 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        do{
        System.out.println("Enter your number:");
        int n=sc.nextInt();
        if(n%10==0){
            break;
        }
        System.out.println(n);
    }while(true);
    sc.close();
    }
}
