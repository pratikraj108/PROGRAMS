public class p11_Break_statement {
    public static void main(String[] args) {
        for(int i=0;i<5;i++){
            if(i==4){
                break;
            }
            System.out.println(i);
        }
        System.out.println("I am out of the loop:");
    }
}
