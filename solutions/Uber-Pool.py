class Solution:
    def solve(self, trips, capacity):
        from collections import defaultdict

        events = defaultdict(int)
        for (start, end, num) in trips:
            events[start] += num
            events[end] -= num
        curr = 0
        for i in range(max(events)):
            curr += events[i]
            if curr > capacity:
                return False
        return True
