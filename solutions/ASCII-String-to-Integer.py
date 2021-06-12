class Solution:
    def solve(self, s):
        import re

        return sum(int(x) for x in re.split(r"\D+", s) if x.isdigit())
