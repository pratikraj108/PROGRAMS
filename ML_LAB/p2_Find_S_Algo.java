// Find-S Algorithm Implementation in Java
public class p2_Find_S_Algo {
    public static void main(String[] args) {
        String[][] Data = {
            {"Sunny", "Warm", "Normal", "Strong", "Warm", "Same", "Yes"},
            {"Sunny", "Warm", "High", "Strong", "Warm", "Same", "Yes"},
            {"Rainy", "Cold", "High", "Strong", "Warm", "Change", "No"},
            {"Sunny", "Warm", "High", "Strong", "Cool", "Change", "Yes"}
        };

        String[] hypothesis = {"0", "0", "0", "0", "0", "0"};

        for (String[] instance : Data) {
            if (instance[instance.length - 1].equals("Yes")) { 
                for (int i = 0; i < hypothesis.length; i++) {
                    if (hypothesis[i].equals("0")) {
                        hypothesis[i] = instance[i]; 
                    } else if (!hypothesis[i].equals(instance[i])) {
                        hypothesis[i] = "?"; 
                    }
                }
            }
        }
        System.out.println("Final Hypothesis:");
        for (String attr : hypothesis) {
            System.out.print(attr + " ");
        }
    }
}