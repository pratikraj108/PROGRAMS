import java.util.*;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
           
            System.out.println("Enter Choices for print the day of week:\n 1:Monday\t2:Tuesday\t3:Wednesday\t4:Thursday\t5:Friday\t6:Saturday ");
            int choice=sc.nextInt();
            switch(choice) {
                case 1 : System.out.println("Monday");
                         break;
                case 2 : System.out.println("Tuesday");
                         break;
                case 3 : System.out.println("Wednesday");
                         break;
                case 4 : System.out.println("Thursday");
                         break;
                case 5 : System.out.println("Friday");
                         break;
                case 6:  System.out.println("Saturday");
                         break;
                case 7:  System.out.println("Sunday");
                         break;         
                default: System.out.println("You have entered wrong number to print days name");
            }
            sc.close();
        } 
    }
    
    
