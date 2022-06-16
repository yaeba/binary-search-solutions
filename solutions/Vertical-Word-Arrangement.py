class Solution:
    def solve(self, s):
        ## good usecase for zip
        s = s.split()
        max_len = max((len(x) for x in s), default=0)
        s = [x.ljust(max_len) for x in s]
        return ["".join(x).rstrip() for x in zip(*s)]
