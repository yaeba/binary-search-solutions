import java.util.*;

class Solution {
    public int solve(int n) {
        // int res = 0;
        // int count = 0;

        // while (n) {
        //     if (n % 2 == 0) {
        //         count = 0;
        //     } else {
        //         count++;
        //         res = Math.max(count, res);
        //     }
        //     n /= 2;
        // }
        // return res;

        // bit manipulation solution by cwfenner
        // number of longest running 1s is number of times
        // n can & with (n << 1) until reaching 0
        // eg, if longest running 1s = 3
        // 110011101 &
        // 100111010 = 100011000 &
        //             000110000 = 000010000 &
        //                         000100000 = 0
        // 3 times
        int res = 0;
        while (n > 0) {
            res++;
            n &= (n << 1);
        }
        return res;
    }
}
