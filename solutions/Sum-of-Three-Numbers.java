import java.util.*;

class Solution {
    public boolean solve(int[] nums, int k) {
        if (nums == null || nums.length < 3)
            return false;

        Arrays.sort(nums);

        for (int x = 0; x < nums.length - 2; x++) {
            if (x > 0 && nums[x] == nums[x - 1]) // dupes
                continue;

            int target = k - nums[x];
            int y = x + 1;
            int z = nums.length - 1;

            if (target < 0 || nums[y] > target) {
                // no more possible triplets
                return false;
            }

            while (y < z) {
                int diff = target - nums[y] - nums[z];
                if (diff == 0)
                    return true;
                else if (diff > 0)
                    y++;
                else
                    z--;
            }
        }

        return false;
    }
}
