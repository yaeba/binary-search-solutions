from collections import deque


class Solution:
    def solve(self, flights):
        res = deque()
        seen = set()
        graph = {x: y for x, y in flights}
        # recursive (modified) topological sort
        def helper(node):
            if node in seen:
                return
            seen.add(node)
            neighbour = graph.get(node)
            if neighbour and neighbour not in seen:
                helper(neighbour)
            res.appendleft(node)

        for x in graph.keys():
            helper(x)

        return list(res)
