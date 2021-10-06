class Solution:
    def solve(self, s, k):
        counts = Counter(s[i : i + k] for i in range(len(s) - k + 1))
        return sum(1 for c in counts.values() if c > 1)
