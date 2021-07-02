import java.util.*;

class Solution {
    public String solve(String s) {
        String res = "";

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != '?') {
                res += s.charAt(i);
                continue;
            }

            boolean isOne = true;
            boolean isTwo = true;

            if (i > 0) {
                // all except first
                if (res.charAt(i - 1) == '1')
                    isOne = false;
                if (res.charAt(i - 1) == '2')
                    isTwo = false;
            }
            if (i < s.length() - 1) {
                // all except last
                if (s.charAt(i + 1) == '1')
                    isOne = false;
                if (s.charAt(i + 1) == '2')
                    isTwo = false;
            }

            if (isOne)
                res += '1';
            else if (isTwo)
                res += '2';
            else
                res += '3';
        }

        return res;
    }
}
