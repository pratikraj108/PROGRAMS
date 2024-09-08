import java.util.*;

public class Input {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        // String input= sc.next();
        // System.out.println(input);
        String name = sc.nextLine();  // for store next line
        System.out.println(name);

        int num=sc.nextInt();
        System.out.println(num);

        float price=sc.nextFloat();
        System.out.println(price);

        boolean var=sc.nextBoolean();
        System.out.println(var);

        short n=sc.nextShort();
        System.out.println(n);

        long ln=sc.nextLong();
        System.out.println(ln);

        sc.close();
    }
}
