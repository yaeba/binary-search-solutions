class Solution:
    def solve(self, s, k):
        MOD = 1e9 + 7
        l = len(s)
        dp = [1] + [0] * l

        for i in range(1, l + 1):
            for j in range(i - 1, -1, -1):
                if s[j] == "0":
                    continue
                elif int(s[j:i]) <= k:
                    dp[i] = (dp[i] + dp[j]) % MOD
                else:
                    break

        return dp[l]
