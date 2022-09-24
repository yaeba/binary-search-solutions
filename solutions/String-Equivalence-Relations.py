class Solution:
    def solve(self, a, b, target):
        ## disjoint-set
        parent = {chr(i): chr(i) for i in range(ord("a"), ord("z") + 1)}

        def find(x):
            if x == parent[x]:
                return x
            return find(parent[x])

        def union(x, y):
            x_root, y_root = find(parent[x]), find(parent[y])
            if x_root > y_root:
                parent[x_root] = y_root
            else:
                parent[y_root] = x_root

        for x, y in zip(a, b):
            union(x, y)

        return "".join([find(c) for c in target])
