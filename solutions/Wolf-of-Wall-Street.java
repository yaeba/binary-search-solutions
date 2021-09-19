import java.util.*;

class Solution {
    public int solve(int[] prices) {
        int maxRight = Integer.MIN_VALUE;
        int profit = 0;

        for (int i = prices.length - 1; i >= 0; i--) {
            maxRight = Math.max(maxRight, prices[i]);
            profit = Math.max(profit, maxRight - prices[i]);
        }

        return profit;
    }
}
