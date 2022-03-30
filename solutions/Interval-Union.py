class Solution:
    def solve(self, intervals):
        res = []
        for (start, end) in sorted(intervals, key=lambda x: (x[0], -x[1])):
            if res and start <= res[-1][1]:
                # res[-1][1] is `prev_end`
                res[-1][1] = max(res[-1][1], end)
            else:
                res.append([start, end])

        return res
