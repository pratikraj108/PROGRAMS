import java.util.Scanner;

public class p18_BinaryToDecimal {
    public static void binaryToDec(int binNum){
        int myBinNum=binNum;
        int pow=0;
        int decNum=0;

        while(binNum>0){
         int lastdigit=binNum %10;
         decNum=decNum+(lastdigit*(int)Math.pow(2,pow));    // Math.pow give double output

              pow++;
              binNum=binNum/10;
        }
        System.out.println("Decimal of"+myBinNum+"="+decNum);                                                // so we need to typecast it from double to int .

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter binary num:");
        int BinNumber=sc.nextInt();
        binaryToDec(BinNumber);
        sc.close();
    }
}
