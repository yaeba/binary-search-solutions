class Solution:
    def solve(self, s):
        filtered = "".join([x for x in s if x.islower()])
        return filtered == filtered[::-1]
