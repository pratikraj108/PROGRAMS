import java.util.Scanner;

public class p8_String_Comparision {
    public static void main(String[] args) {
        System.out.println("Enter 1st string:");
        Scanner sc=new Scanner(System.in);
        String s1;
        s1= sc.nextLine();
        System.out.println("Enter 2nd String:");
        String s2;
        s2=sc. nextLine();

        if(s1.equals(s2)){
            System.out.println("String is equals");
        }
        else{
            System.out.println("String not equals");
        }
        sc.close();
    }
}
