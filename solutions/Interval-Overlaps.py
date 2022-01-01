class Solution:
    def solve(self, l0, l1):
        lst = sorted(l0 + l1, key=lambda x: (x[0], -x[1]))
        res = []
        if not lst:
            return res
        _, a_end = lst[0]
        for (b_start, b_end) in lst[1:]:
            if b_start <= a_end:
                ## overlap
                res.append([b_start, min(a_end, b_end)])
            if b_end > a_end:
                _, a_end = b_start, b_end

        return res
