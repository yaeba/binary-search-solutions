import itertools as it


class Solution:
    def solve(self, stacks):
        if not stacks:
            return 0

        prefix_sum = lambda x: list(it.accumulate(x))
        stacks = [prefix_sum(stack) for stack in stacks]
        sums = set(stacks[0])
        for stack in stacks[1:]:
            sums = sums.intersection(stack)

        return max(sums, default=0)
