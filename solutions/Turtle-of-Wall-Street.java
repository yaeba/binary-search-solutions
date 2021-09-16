import java.util.*;

class Solution {
    public int solve(int[] nums) {
        int res = 0;
        int sellPrice = Integer.MIN_VALUE;

        for (int i = nums.length - 1; i >= 0; i--) {
            sellPrice = Math.max(nums[i], sellPrice);
            res += sellPrice - nums[i];
        }

        return res;
    }
}
