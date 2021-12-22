class Solution:
    def solve(self, nums, operations):
        from collections import defaultdict
        import itertools

        events = defaultdict(int)
        for (a, b, k) in operations:
            events[a] += k
            events[b + 1] -= k
        prefix_sum = list(itertools.accumulate([events[l] for l in range(len(nums))]))
        return [x + y for x, y in zip(prefix_sum, nums)]
