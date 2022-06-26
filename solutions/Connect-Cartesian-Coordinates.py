class Solution:
    def solve(self, points):
        ## equivalent to finding total weight of MST
        ## either prims or kruskal's alg should work

        if not points:
            return 0

        res = 0
        costs = {tuple(point): float("inf") for point in points}

        # use prims and start from first node
        costs[tuple(points[0])] = 0

        while costs:
            x0, y0 = min(costs, key=costs.get)
            res += costs.pop((x0, y0))
            # update remaining costs
            for (x1, y1), cost in costs.items():
                new_cost = abs(x1 - x0) + abs(y1 - y0)
                costs[(x1, y1)] = min(cost, new_cost)

        return res
