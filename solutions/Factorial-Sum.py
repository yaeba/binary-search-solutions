class Solution:
    def solve(self, n):
        factorials = [1] * 12
        for i in range(1, 12):
            factorials[i] = factorials[i - 1] * (i + 1)

        for x in factorials[::-1]:
            if n >= x:
                n -= x

        return n == 0
