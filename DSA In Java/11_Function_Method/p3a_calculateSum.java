import java.util.Scanner;

public class p3a_calculateSum {
    public static int printHelloWorld(){
        System.out.println("Hello World");
        System.out.println("Hello World");
        System.out.println("Hello World");  
        return 3;      
    }
    // public static void main(String args[]){
        // printHelloWorld();
    
    public static void calculateSum(){
        Scanner sc =new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("sum is :"+ sum);
    }  
    public static void main(String args[]){
        calculateSum();
    }
}
