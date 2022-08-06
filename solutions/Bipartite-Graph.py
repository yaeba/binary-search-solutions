class Solution:
    def solve(self, graph):
        labels = {}

        def solveR(i, label):
            if i in labels:
                return label == labels[i]
            labels[i] = label
            return all(solveR(j, 1 - label) for j in graph[i])

        return all(solveR(i, 0) for i in range(len(graph)) if i not in labels)
