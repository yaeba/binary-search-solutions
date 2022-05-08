class Solution:
    def solve(self, edges):
        has_incoming = set()
        for _, v in edges:
            has_incoming.add(v)

        return sorted(set(x for nodes in edges for x in nodes if x not in has_incoming))
