import java.util.Scanner;

public class p20_DecToBin {
    public static void DecimalToBin(int DecNum){
        int pow=0;
        int binNum=0;
        int myNum=DecNum;

        while (DecNum>0) {
            int rem=DecNum%2;        //remainder 
            binNum= binNum +rem*(int)Math.pow(10, pow);
            pow++;     
            DecNum=DecNum/2;    //quotient 
        } 
        System.out.println("Binary form of"+myNum+"="+binNum);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Decimal Number:");
        int DecimalNum=sc.nextInt();
        DecimalToBin(DecimalNum);
        sc.close();
    }
}
