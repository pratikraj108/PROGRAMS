import java.util.*;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. for finding factorial:");
        int n=sc.nextInt();
        int fact=1;
        for(int i=0;i<n;n--){
            fact=fact*n;
        }
        System.out.println("Factorial is:"+fact);
        sc.close();
    }
}
