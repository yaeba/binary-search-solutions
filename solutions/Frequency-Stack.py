from collections import defaultdict


class FrequencyStack:
    def __init__(self):
        # maintain stacks for different frequencies
        self.counts = defaultdict(int)
        self.stacks = defaultdict(list)

    def append(self, val):
        self.counts[val] += 1
        self.stacks[self.counts[val]].append(val)

    def pop(self):
        popKey = len(self.stacks)
        popped = self.stacks[popKey].pop()
        if not self.stacks[popKey]:
            self.stacks.pop(popKey)
        self.counts[popped] -= 1
        return popped
