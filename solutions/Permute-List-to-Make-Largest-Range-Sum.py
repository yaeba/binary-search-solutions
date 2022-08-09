from collections import defaultdict


class Solution:
    def solve(self, nums, ranges):
        MOD = 1e9 + 7
        ## line sweep
        ## mark start as +1 and mark (end+1) as -1
        ## eg (1, 4), (3, 5)
        ## nums : 0  1  2  3   4   5
        ## event: 0  1  0  1  -1  -1
        ## cumu : 0  1  1  2   1   0
        events = defaultdict(int)
        for start, end in ranges:
            events[start] += 1
            events[end + 1] -= 1

        running = 0
        counts = []
        for i in range(len(nums)):
            running += events.get(i, 0)
            counts.append(running)

        return sum(count * num for count, num in zip(sorted(counts), sorted(nums))) % MOD
