import java.util.*;

public class p3b_calculateSum {
    public static void calculateSum(int n1,int n2){
        int sum=n1+n2;
        System.out.println("sum is :"+ sum);
    }
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        calculateSum(a,b);
    }
}