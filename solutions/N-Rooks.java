import java.util.*;

class Solution {
    public int solve(int n) {
        int res = 1;
        for (int i = 1; i <= n; i++) res *= i;
        return res;
    }
}
