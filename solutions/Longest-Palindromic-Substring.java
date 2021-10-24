import java.util.*;

class Solution {
    public int solve(String s) {
        int len = s.length();
        if (len <= 1) {
            return len;
        }

        // O(n^2) time, O(1) space
        // we can expand and find longest palindrome from
        // 2n-1 centers
        int res = -1;

        for (int i = 0; i < s.length(); i++) {
            int curr = Math.max(expandMid(s, i, i), expandMid(s, i, i + 1));
            res = Math.max(res, curr);
        }

        return res;
    }

    public int expandMid(String s, int start, int end) {
        while (start >= 0 && end < s.length() && s.charAt(start) == s.charAt(end)) {
            // expand towards both ends
            start--;
            end++;
        }
        return (end - 1) - (start + 1) + 1;
    }
}
