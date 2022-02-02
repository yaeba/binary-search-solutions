from collections import defaultdict


class Solution:
    def solve(self, intervals):
        ## line sweep
        ## mark start as +1 and mark end as -1
        ## eg (1, 4), (3, 5)
        ## nums : 0  1  2  3   4   5  6
        ## event: 0  1  0  1  -1  -1  0
        ## cumu : 0  1  1  2   1   0  0 (count)

        events = defaultdict(int)

        for (start, end) in intervals:
            events[start] += 1
            events[end] -= 1

        curr = 0
        res = 0
        for (_, event) in sorted(events.items()):
            curr += event
            res = max(curr, res)
        return res
