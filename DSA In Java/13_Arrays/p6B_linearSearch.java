import java.util.*;
public class p6B_linearSearch {
    public static int linearSearch(String[] menu, String key) {
        for (int i = 0; i < menu.length; i++) {
            if (menu[i].equalsIgnoreCase(key)) {
                return i;
            }
        }
        return -1;  // key does not exist
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of food items in the menu:");
        int n = sc.nextInt();
        sc.nextLine(); // Consume the newline character

        String[] menu = new String[n];
        System.out.println("Enter the food items in the menu:");
        for (int i = 0; i < n; i++) {
            menu[i] = sc.nextLine();
        }

        System.out.println("Enter the food item to search:");
        String key = sc.nextLine();

        int index = linearSearch(menu, key);
        if (index == -1) {
            System.out.println("Food item not found in the menu");
        } else {
            System.out.println("Food item found at index: " + index);
        }

        sc.close();
    }
}

