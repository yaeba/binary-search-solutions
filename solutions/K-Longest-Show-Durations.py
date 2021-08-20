class Solution:
    def solve(self, shows, durations, k):
        d = defaultdict(int)
        for (show, duration) in zip(shows, durations):
            d[show] += duration
        return sum(sorted(d.values(), reverse=True)[:k])
