// WriteaJavaprogramtogetanumberfromtheuserandprintwhether it is
// positive or negative.
import java.util.*;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int a=sc.nextInt();
        if(a>0){
            System.out.println("Number is +ve");
        }
        else if(a==0){
            System.out.println("Number is Zero");
        }
        else{
            System.out.println("Number is -ve");
        }
        sc.close();
    }
}
