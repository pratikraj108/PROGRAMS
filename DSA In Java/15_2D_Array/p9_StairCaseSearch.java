import java.util.*;
public class p9_StairCaseSearch {
    public static boolean stairCaseSearch(int matrix[][],int key){
        int row=0, col=matrix[0].length-1;
        while(row <matrix.length && col >=0){
            if(matrix[row][col]==key){
                System.out.println("found key at (" + row+ "," + col + ")");
                return true;
            }
            else if(key< matrix[row][col]){
                col--;
            }
            else{
                row++;
            }
        }
        System.out.println("Key not found");
        return false;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        //taing order of matrix from user
        System.out.println("Enter no. of rows:");
        int n=sc.nextInt();
        System.out.println("Enter no. of colns:");
        int m=sc.nextInt();

        int matrix[][]=new int [n][m];
        // taking element from user
       System.out.println("Enter the elements:");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        //taking key
        System.out.print("Enter the key to search:");
        int key =sc.nextInt();
        stairCaseSearch(matrix, key);
        sc.close();
    }
}
