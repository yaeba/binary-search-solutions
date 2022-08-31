from collections import Counter


class Solution:
    def solve(self, a, b):
        res = float("inf")
        counts = Counter(b)
        rem = len(counts)

        left = 0
        for right in range(len(a)):
            if a[right] not in counts:
                continue
            counts[a[right]] -= 1
            rem -= counts[a[right]] == 0

            while rem == 0:
                # found candidate
                res = min(res, right - left + 1)
                # move left by one
                if a[left] in counts:
                    rem += counts[a[left]] == 0
                    counts[a[left]] += 1
                left += 1

        return -1 if res == float("inf") else res
