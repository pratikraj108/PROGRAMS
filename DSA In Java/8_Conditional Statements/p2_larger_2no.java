import java.util.*;

public class p2_larger_2no {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a>b){
            System.out.println("Maximum is:"+(a) );
        }
        else{
            System.out.println("Maximum is"+(b));
        }
        sc.close();
    }
}