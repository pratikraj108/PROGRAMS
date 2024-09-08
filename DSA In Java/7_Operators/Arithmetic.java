import java.util.*; 
public class Arithmetic{
    public static void main (String args[]){
// Binary operator
int A=10;
int B=5;
System.out.println("sum="+(A+B));
System.out.println("sub="+(A-B));
System.out.println("mul="+(A*B));
System.out.println("div="+(A/B));
System.out.println("remainder="+(A%B));
  
// unary operator
      //pre increment
int a=68;
int b = ++a;
System.out.println(a);
System.out.println(b);

      //post increment
int c=2;
int d = c++;
System.out.println(c);
System.out.println(d);

     //pre decrement
     int x=75;
     int y = --x;
     System.out.println(x);
     System.out.println(y);
     
           //post decrement
     int p=13;
     int q=p--;
     System.out.println(p);
     System.out.println(q);
    }
}