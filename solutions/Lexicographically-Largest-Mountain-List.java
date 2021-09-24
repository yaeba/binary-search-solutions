import java.util.*;

class Solution {
    public int[] solve(int n, int lower, int upper) {
        int s = n / 2;
        if (upper - s < lower) {
            // no solution
            return new int[0];
        }
        int[] res = new int[n];
        int nLeft = n - Math.min(upper - lower, n - 2) - 1;
        int left = upper - nLeft;
        int idx = 0;

        while (left < upper) res[idx++] = left++;
        while (idx < n) res[idx++] = left--;

        return res;
    }
}
