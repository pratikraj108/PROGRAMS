public class p6_SwapCallByValue {

    public static void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
        System.out.println("a="+a);
        System.out.println("b="+b);
    }
    public static void main(String[] args) {
        //swap - value exchange
        int a=69;
        int b=96;
        swap(a,b);
        //swap
        

    }
}
