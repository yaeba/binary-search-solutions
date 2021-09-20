import java.util.*;

class Solution {
    public int solve(int[] nums, int target) {
        int l = 0, h = nums.length; // can be inserted at rightmost

        while (l < h) {
            int m = l + (h - l) / 2;
            if (nums[m] <= target) {
                l = m + 1;
            } else {
                h = m;
            }
        }

        return l;
    }
}
