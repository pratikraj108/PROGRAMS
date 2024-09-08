// Write a java method to compute the average of three numbers..

import java.util.Scanner;

public class Q1 {
    public static void avg(float x,float y,float z){
        float sum=0;
        sum=(x+y+z);
        float avg=sum/3;
        System.out.println("Average of three no. is:"+avg);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter three numbers:");
        float num1=sc.nextInt();
        float num2=sc.nextInt();
        float num3=sc.nextInt();
        avg(num1, num2, num3);
        sc.close();
    }
}
