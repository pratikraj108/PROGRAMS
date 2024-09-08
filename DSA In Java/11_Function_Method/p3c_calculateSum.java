import java.util.*;
public class p3c_calculateSum {
    public static int calculateSum(int n1,int n2){//parameters or formal parameter
        int sum=n1+n2;
        return sum;
    }
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int result=calculateSum(a,b);// arguments or actual parameter 
        System.out.println("sum is :"+ result);
        sc.close(); 
    }
}
