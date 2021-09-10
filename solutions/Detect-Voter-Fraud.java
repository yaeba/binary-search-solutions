import java.util.*;

class Solution {
    public boolean solve(int[][] votes) {
        HashSet<Integer> set = new HashSet();

        for (int[] vote : votes) {
            if (set.contains(vote[1]))
                return true;
            set.add(vote[1]);
        }

        return false;
    }
}
