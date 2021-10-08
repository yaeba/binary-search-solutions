class Solution:
    def solve(self, words, letters):
        use = Counter(letters)
        for word in sorted(words, key=len, reverse=True):
            counts = Counter(word)
            if all(use[char] - freq >= 0 for char, freq in counts.items()):
                return len(word)
        return 0
