import java.util.*;

class Solution {
    public int solve(int n, int e, int o, int t) {
        double re = e / 100.0 + 1;
        double ro = o / 100.0 + 1;
        int each = (int) Math.ceil(Math.log(1.0 * t / n) / Math.log(re * ro));

        if (n * Math.pow(re, each) * Math.pow(ro, each - 1) >= t)
            return each * 2 - 1;
        return each * 2;
    }
}
