class Solution:
    def solve(self, s0, s1):
        w0 = {w.lower() for w in s0.split(" ") if w != ""}
        w1 = {w.lower() for w in s1.split(" ") if w != ""}

        return len(w0.intersection(w1))
