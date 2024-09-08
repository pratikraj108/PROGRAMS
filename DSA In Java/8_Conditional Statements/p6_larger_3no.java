import java.util.*;
public class p6_larger_3no {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        if(a>=b && a>=c){
            System.out.println("Maximum is a:"+(a) );
        }
        else if(b>=a && b>=c){
            System.out.println("Maximum is b:"+(b));
        }
        else{
            System.out.println("Maximum is c:"+(c));
        }
               
        sc.close();
    }
}

