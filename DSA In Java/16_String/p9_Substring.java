import java.util.Scanner;

//import javax.swing.plaf.synth.SynthPasswordFieldUI;

public class p9_Substring {
    public static String substring (String str,int si  , int ei  ){
        String substr ="";
        for(int i=si; i<ei-1; i++){
            substr += str.charAt(i);
        }
        return substr;
    }
    public static void main(String[] args) {
        //Substring
        System.out.println("Enter the String:");
        Scanner sc=new Scanner(System.in);
        String str;
        str =sc.nextLine();
        System.out.println("Enter the first index:");
        int si=sc.nextInt();
        System.out.println("Enter index of end index:");
        int ei=sc.nextInt();
       // System.out.println("The Substring is:"+substring(str,si,ei));
        System.out.println(str.substring(si,ei)); //using inbuilt function
        sc.close();
    }
}
