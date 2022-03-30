from collections import defaultdict


class Solution:
    def solve(self, intervals):
        ## line sweep
        ## mark start as +1 and mark (end+1) as -1
        ## eg (1, 4), (3, 5)
        ## nums : 0  1  2  3   4   5
        ## event: 0  1  0  1  -1  -1
        ## cumu : 0  1  1  2   1   0
        events = defaultdict(int)

        for (start, end) in intervals:
            events[start] += 1
            events[end] -= 1

        curr = res = 0
        prev = None
        for (num, event) in sorted(events.items()):
            curr += event
            if prev is None:
                prev = num
            if curr == 0:
                res = max(res, num - prev + 1)
                prev = None

        return res
