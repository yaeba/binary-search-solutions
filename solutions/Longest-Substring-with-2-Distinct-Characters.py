class Solution:
    def solve(self, s):
        freq = {}
        start = res = 0
        for idx, char in enumerate(s):
            freq[char] = freq.get(char, 0) + 1
            while len(freq) > 2:
                pop = s[start]
                freq[pop] -= 1
                if freq[pop] == 0:
                    freq.pop(pop)
                start += 1
            res = max(res, idx - start + 1)

        return res
