import java.util.*;

class Solution {
    public int solve(int[] rooms, int target) {
        for (int i : rooms) {
            if (i >= target) return i;
        }
        return -1;
    }
}
