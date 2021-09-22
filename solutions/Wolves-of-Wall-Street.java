import java.util.*;

class Solution {
    public int solve(int[] prices) {
        // find the cumulative differences and sum only positive values
        // eg prices = [1, 5, 3, 4, 6]
        // diffs = [0, 4, -2, 1, 2]
        // answer = 4 + 1 + 2 = 7
        int res = 0;

        for (int i = 0; i + 1 < prices.length; i++) {
            res += Math.max(prices[i + 1] - prices[i], 0);
        }

        return res;
    }
}
