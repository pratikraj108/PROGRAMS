import java.util.*;
public class p5_SumOfNnaturalno {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enetr last number:");
        int n=sc.nextInt();
        int num=1;
        int sum=0;
        System.out.println("Numbers are:");
        while(num<=n){

            System.out.println(num);
            sum=sum+num;
            num++;

        }
       
        System.out.println("Sum"+sum);
        sc.close();
    }
}     
    