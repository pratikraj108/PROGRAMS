public class p13_FxnOverloadingUsingDataType {
    public static int sum(int a,int b){
        return a + b;
    }
public static float sum(float a,float b){
    return a+b;
}
public static void main(String args[]){
    System.out.println(sum(3,5));
    System.out.println(sum(5.2f,2.34f ));
}
}
