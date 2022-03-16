class Solution:
    def solve(self, graph):
        res = [[] for _ in graph]

        for a, bs in enumerate(graph):
            for b in bs:
                res[b].append(a)

        return res
