class Solution:
    def solve(self, intervals):
        ## line sweep
        ## mark start as +1 and mark (end+1) as -1
        ## eg (1, 4), (3, 5)
        ## nums : 0  1  2  3  4   5  6
        ## event: 0  1  0  1  1  -1 -1
        ## cumu : 0  1  1  2  2   1  0 (count)

        events = defaultdict(int)

        for (start, end) in intervals:
            events[start] += 1
            events[end + 1] -= 1

        curr = 0
        best = (0, 0)  # (num, max_freq)
        for (num, event) in sorted(events.items()):
            curr += event
            if curr > best[1]:
                best = (num, curr)
        return best[0]
