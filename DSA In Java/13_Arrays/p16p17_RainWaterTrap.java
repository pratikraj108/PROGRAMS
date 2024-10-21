import java.util.*;

public class p16p17_RainWaterTrap {
    public static int TrapRainWater(int height[]) {
        int n = height.length;
        // calculate left max boundary - array
        int LeftMax[] = new int[n];
        LeftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            LeftMax[i] = Math.max(height[i], LeftMax[i - 1]);
        }
        // calculate right max boundary - array
        int RightMax[] = new int[n];
        RightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            RightMax[i] = Math.max(height[i], RightMax[i + 1]);
        }

        int TrapWater = 0;
        // loop
        for(int i=0;i<n;i++){
            // waterLevel =min(LeftMax,RightMax)
           int  WaterLevel=Math.min(LeftMax[i], RightMax[i]) ;
            // TrapWater=WaterLevel-height[i]
            TrapWater+= WaterLevel-height[i];
        }
        return  TrapWater;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int num=sc.nextInt();
        int height[]=new int [num];
        System.out.println("Enter the elment of array:");
        for(int i=0;i<num;i++){
            height[i]=sc.nextInt();
        }
        TrapRainWater(height);
        System.out.println("Total Trapped water is:"+TrapRainWater(height));
    }
}
