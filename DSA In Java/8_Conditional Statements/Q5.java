import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter year to check it is leap or not");
        int year=sc.nextInt();
        if(year<=10000){
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    System.out.println("It's  leap year");
                }
                else{
                    System.out.println("Not leap year");
                }
            }
            else{
                System.out.println("leap Year");
            }
        }
        else{
            System.out.println("Leap year nahi hai");
        }
    }
    else{
        System.out.println("Invalid year! my calc is unable to calculate");
    }   
        sc.close();
}
}
