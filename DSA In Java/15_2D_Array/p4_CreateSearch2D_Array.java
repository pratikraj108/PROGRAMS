import java.util.*;
public class p4_CreateSearch2D_Array {
    public static boolean search(int matrix[][], int key) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] == key) {
                    System.out.println("Found at cell (" + i + "," + j + ")");
                    return true;
                }
            }
        }
        System.out.println("Key not found");
        return false;
    }

    public static void main(String[] args) {
        int matrix[][] = new int[3][3];
        int n = matrix.length, m = matrix[0].length;

        // Input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        } 

        System.out.print("Enter key to search: ");
        int key = sc.nextInt();

        // Output matrix
        System.out.println("Matrix is:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        // Search for the key
        search(matrix, key);
    }
    
}
