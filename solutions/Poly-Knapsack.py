import functools


class Solution:
    def solve(self, weights, values, capacity):
        @functools.cache
        def max_value(cap):
            return max(
                [value + max_value(cap - weight) for value, weight in zip(values, weights) if weight <= cap],
                default=0,
            )

        return max_value(capacity)
