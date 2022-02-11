class Solution:
    def solve(self, message):
        if message.startswith("0"):
            return 0
        # eg input = "123"
        # init dp  [1,   1,   0,    0  ]
        # message  ["", "1", "12","123"]
        # final dp [1,   1,   2,    3  ]
        dp = [1] + [0] * len(message)
        dp[1] = 1

        for i in range(1, len(message)):
            j = i + 1
            if 1 <= int(message[i]) <= 9:
                dp[j] += dp[j - 1]
            if 10 <= int(message[i - 1 : i + 1]) <= 26:
                dp[j] += dp[j - 2]

        return dp[len(message)]
