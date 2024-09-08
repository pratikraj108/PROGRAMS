public class p7_multiply {
    public static int mul(int a,int b){
       int product=a*b;
        return product;
    }     public static void main(String[] args) {
        //swap - value exchange
        int a=9;
        int b=6;
        int prod=mul(a,b);
        System.out.println("a*b="+prod);
        prod=mul(5,10);
        System.out.println("a*b="+prod);
    }
}

