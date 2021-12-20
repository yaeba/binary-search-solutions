class Solution:
    def solve(self, s):
        lst = [""]
        prev = None
        for c in s:
            if c == lst[-1]:
                lst.pop()
            elif c == prev:
                continue
            else:
                lst.append(c)
            prev = c

        return "".join(lst)
