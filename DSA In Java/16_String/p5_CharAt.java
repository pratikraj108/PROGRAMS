import java.util.Scanner;

public class p5_CharAt {
    public static void main(String [] args){
        System.out.println("Enter the first string:");
        Scanner sc=new Scanner(System.in);
        String fname;
        fname=sc.nextLine();
        System.out.println("Enter the second string:");
        String lname;
        lname=sc.nextLine();
        String fullname=fname+" "+lname;
        int index;
        System.out.println("Enter the index no :");
        index=sc.nextInt();
        System.out.println("The character at index"+" " + index +" "+ "is : " + fullname.charAt(index));
        sc.close();
    }
}
