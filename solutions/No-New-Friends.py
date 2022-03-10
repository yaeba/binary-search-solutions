class Solution:
    def solve(self, n, friends):
        return len(set(sum(friends, []))) == n
