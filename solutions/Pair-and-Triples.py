class Solution:
    def solve(self, s):
        return [(x - 2) % 3 for x in Counter(s).values() if x % 3 != 0] == [0]
