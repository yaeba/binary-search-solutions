from collections import defaultdict


class Solution:
    def solve(self, n, enemies):
        # convert to adjacency list graph format
        graph = defaultdict(list)
        for (source, dest) in enemies:
            graph[source].append(dest)
            graph[dest].append(source)

        # check if graph is bipartite
        labels = {}

        def solveR(i, label):
            if i in labels:
                return label == labels[i]
            labels[i] = label
            return all(solveR(j, 1 - label) for j in graph[i])

        return all(solveR(i, 0) for i in range(len(graph)) if i not in labels)
