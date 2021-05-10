class Solution:
    def solve(self, n):
        s = set()

        while True:
            t = sum([int(i) ** 2 for i in str(n)])
            if t == 1:
                return True
            elif t in s:
                return False
            s.add(t)
            n = t
