class Solution:
    def solve(self, s):
        ## replace last smallest with anything larger greedily
        smallest_ord = 256
        smallest_idx = None
        for i, c in enumerate(s):
            ## find smallest
            if ord(c) <= smallest_ord:
                smallest_idx, smallest_ord = i, ord(c)
        for i, c in enumerate(s):
            if i >= smallest_idx:
                break
            if ord(c) > smallest_ord:
                ## found first larger to replace
                return (
                    s[:i]
                    + chr(smallest_ord)
                    + s[i + 1 : smallest_idx]
                    + c
                    + s[smallest_idx + 1 :]
                )
        return s
