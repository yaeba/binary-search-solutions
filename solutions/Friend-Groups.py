class Solution:
    def solve(self, friends):
        ## find number of connected components
        seen = set()
        res = 0

        def dfs(node):
            seen.add(node)
            for other in friends[node]:
                if other not in seen:
                    dfs(other)

        for node, _ in enumerate(friends):
            if node not in seen:
                dfs(node)
                res += 1

        return res
