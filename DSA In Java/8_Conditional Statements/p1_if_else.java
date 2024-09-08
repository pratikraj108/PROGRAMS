public class p1_if_else {
    public static void main(String[] args) {
        int age=26;
        if(age>=18){
            System.out.println("Adult: drive,vote");
        }
        if(age>13 && age<18){
            System.out.println("Teenager");
        }
        else{
            System.out.println("Not adult");
        }
    }
}
