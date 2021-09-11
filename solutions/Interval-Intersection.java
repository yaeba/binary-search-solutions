import java.util.*;

class Solution {
    public int[] solve(int[][] intervals) {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;

        for (int[] interval : intervals) {
            min = Math.min(interval[1], min);
            max = Math.max(interval[0], max);
        }

        return new int[] {max, min};
    }
}
