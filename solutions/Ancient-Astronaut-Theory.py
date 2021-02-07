class Solution:
    def solve(self, dictionary, s):
        charToIndex = {char: idx for (idx, char) in enumerate(dictionary)}
        indices = [charToIndex[c] for c in s if c in charToIndex]
        return indices == sorted(indices)
