class Solution:
    def solve(self, s, t):
        if s == t:
            return True
        elif len(s) != len(t):
            return False
        return all(x % 2 == 0 for x in (Counter(s) + Counter(t)).values())
