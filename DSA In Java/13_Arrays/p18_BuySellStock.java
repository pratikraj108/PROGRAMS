import java.util.*;

public class p18_BuySellStock {
      public static int BuyAndSellStock(int prices[]){
        int buyPrice=Integer.MAX_VALUE;
        int maxProfit=0;

        for(int i=0;i<prices.length;i++){
            if(buyPrice<prices[i]){  // profit
                int profit=prices[i]-buyPrice;   // today's  profit
                maxProfit=Math.max(maxProfit,profit);
            }else{
                buyPrice=prices[i];
            }
        }
        return maxProfit;
      }
        public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int num=sc.nextInt();
        int prices[]=new int [num];
        System.out.println("Enter the elment of array:");
        for(int i=0;i<num;i++){
            prices[i]=sc.nextInt();
        }
       System.out.println ("Maximum Profit:"+BuyAndSellStock(prices));
    }
}

// Time complexity is:  O(n).