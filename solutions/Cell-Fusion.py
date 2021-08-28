class Solution:
    def solve(self, cells):
        import heapq

        negated = [-cell for cell in cells]
        heapq.heapify(negated)

        while len(negated) >= 2:
            a, b = heapq.heappop(negated), heapq.heappop(negated)
            if a != b:
                heapq.heappush(negated, int((a + b) / 3))

        return -1 if not negated else -negated[0]
