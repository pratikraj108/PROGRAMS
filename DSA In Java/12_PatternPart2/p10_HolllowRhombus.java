import java.util.*; 
public class p10_HolllowRhombus {
    public static void Hollow_Rhombus(int r) {
        for (int i = 1; i <= r; i++) {
            // spaces
            for (int j = 1; j <= (r - i); j++) {
                System.out.print(" ");
            }
            // hollow rect stars
            for (int j = 1; j <= r; j++) {
                if (i == 1 || i == r || j == 1 || j == r) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }

            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of rows:");
        int rows = sc.nextInt();
        Hollow_Rhombus(rows);
        sc.close();
    }
}
