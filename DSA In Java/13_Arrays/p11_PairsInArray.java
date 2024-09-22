import java.util.*;
public class p11_PairsInArray {
    public static void printpair(int num[]){
        int tp=0;
        for(int i=0;i<num.length;i++){
            int current=num[i];
            for(int j=i+1;j<num.length;j++){
                System.out.print("("+current+","+num[j]+")");
                tp++;
            }
            System.out.println();
        }
        System.out.println("Total Pairs="+tp);

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int n=sc.nextInt();
        int num[]=new int[n];
        System.out.println("Enetr array element:");
        for(int i=0;i<n;i++){
            num[i]=sc.nextInt();
        }
        sc.close();
        printpair(num);
    }
}