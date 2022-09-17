import java.util.*;

class Solution {
    public int solve(int[] nums, int k) {
        if (nums == null || nums.length < 3)
            return 0;

        Arrays.sort(nums);
        int res = 0;

        for (int x = 0; x < nums.length - 2; x++) {
            int target = k - nums[x];
            int y = x + 1;
            int z = nums.length - 1;

            if (target < 0 || nums[y] > target) {
                // no more possible triplets
                return res;
            }

            while (y < z) {
                if (nums[y] + nums[z] < target) {
                    res += z - y;
                    y++;
                } else
                    z--;
            }
        }

        return res;
    }
}
