import java.util.Scanner;

public class p6_CheckPalindrome {
    public static boolean isPalindrome(String str){
        for(int i=0;  i<str.length()/2  ;  i++){
            int n= str.length();
           if( str.charAt(i) != str.charAt(n-1-i)) {
                //not a palindrome
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]) {
        System.out.println("Enter the string:");
        Scanner sc=new Scanner(System.in);
        String str;
        str=sc.nextLine();
        System.out.println(isPalindrome(str));
        sc.close();
    }
}
