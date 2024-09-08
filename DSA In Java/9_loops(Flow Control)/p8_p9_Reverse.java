import java.util.*;
public class p8_p9_Reverse {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int rev=0;
        int num=sc.nextInt();
        while(num>0){
            rev=(rev*10)+(num%10);
            num/=10;
        }
        System.out.println("Reverse Number is:"+rev);
        sc.close();
    }
}
