import java.util.*;
public class p3_Marks {
    public static void main(String[] args) {
        int marks[]=new int [100];
        Scanner sc=new Scanner(System.in);
        marks[0]=sc.nextInt();// phy
        marks[1]=sc.nextInt(); // chem
        marks[2]=sc.nextInt();  // math      

        System.out.println("phy:"+marks[0]);
        System.out.println("Chem:"+marks[1]);
        System.out.println("math:"+marks[2]);
 
        marks[2]=100;
        marks[2]=marks[2]+1;
        System.out.println("math:"+marks[2]);

        int per=(marks[0]+marks[1]+marks[2])/3;
        System.out.println("percentage:"+per+"%");
        sc.close();
    }
}
