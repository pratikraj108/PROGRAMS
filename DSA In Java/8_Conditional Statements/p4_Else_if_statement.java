public class p4_Else_if_statement {

   public static void main(String[] args) {
      
      int age=40;

      if(age>=18){
         System.out.println("Adult"); 
      }
      else if(age>=13 && age<=18){
         System.out.println("Teenagers");
      }
      else {
         System.out.println("child");
      }
 }
 
}
