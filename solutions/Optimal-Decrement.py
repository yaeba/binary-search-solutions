import heapq


class Solution:
    def solve(self, nums, k):
        neg_nums = [-x for x in nums]
        heapq.heapify(neg_nums)
        for _ in range(k):
            popped = heapq.heappop(neg_nums)
            heapq.heappush(neg_nums, popped + 1)

        return -heapq.heappop(neg_nums)
