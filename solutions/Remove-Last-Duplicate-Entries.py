class Solution:
    def solve(self, nums):
        counts = Counter(nums)
        dupes = {k for (k, v) in counts.items() if v > 1}
        lst = []

        for n in nums:
            counts[n] -= 1
            if n not in dupes or counts[n]:
                lst.append(n)

        return lst
