class Solution:
    def solve(self, nums):
        import heapq

        heapq.heapify(nums)
        res = 0
        while len(nums) > 1:
            s = heapq.heappop(nums) + heapq.heappop(nums)
            res += s
            heapq.heappush(nums, s)

        return res
