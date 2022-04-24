from heapq import heappush, heappop


class Solution:
    def solve(self, matrix, k):
        # use a heap to store k + 1 smallest elements at any time
        heap = []
        for row in matrix:
            for val in row:
                heappush(heap, -val)
                if len(heap) > k + 1:
                    heappop(heap)

        return -heappop(heap)
