import java.util.*;
public class p10_calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;
        System.out.println("Enter two numbers for operation:");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        do {
           
            System.out.println("Enter Choices for Operations:\n 1:Add\t2:Sub\t3:mul\t4:Div\t5:Remainder");
             choice=sc.nextInt();
            switch(choice) {
                case 1 : System.out.println("SUM:" + (num1 + num2));
                         break;
                case 2 : System.out.println("SUB:" + (num1 - num2));
                         break;
                case 3 : System.out.println("MUL:" + (num1 * num2));
                         break;
                case 4 : if (num2 != 0) {
                         System.out.println("DIV:" + (num1 / num2));
                } else {
                         System.out.println("Division by zero is not allowed.");
                }
                         break;
                case 5 : System.out.println("REMAINDER:" + (num1 % num2));
                         break;
                case 6:  break;
                default: System.out.println("You have entered wrong number to perform operation:");
            }
        } while(choice!=6);
        sc.close();
    }
}
