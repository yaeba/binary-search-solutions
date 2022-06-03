class Solution:
    def solve(self, a, b):
        i = j = res = 0
        while i < len(a) and j < len(b):
            min_l = min(a[i], b[j])
            a[i] -= min_l
            b[j] -= min_l
            res += min_l * a[i + 1] * b[j + 1]
            i += 0 if a[i] else 2
            j += 0 if b[j] else 2

        return res
