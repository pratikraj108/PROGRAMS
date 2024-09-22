import java.util.*;
public class p4_ArrayAsArgument {
    public static void update(int marks[],int nonChangable){
        nonChangable=10;
        for(int i=0;i<marks.length;i++){
            marks[i]=marks[i]+1;
        }
    }
    public static void main(String[] args) {
        int marks[]={ 97,98,99};
        // System.out.println("Marks before update:"+ marks[].class);
        int nonChangable=5;
        update(marks,nonChangable);
        System.out.println(nonChangable);
        System.out.print("Marks after update: ");
        for(int i=0;i<marks.length;i++){
            System.out.print(marks[i]+" ");
        }
        System.out.println();
    }
}
