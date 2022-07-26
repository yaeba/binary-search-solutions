class Solution:
    def solve(self, ports, shipments):
        # since there are at most 100 ports
        # we can calculate min dist of all pairs

        V = len(ports)
        # Floyd–Warshall algorithm
        dist = [[float("inf") for _ in range(V)] for _ in range(V)]
        for origin in range(V):
            for dest in ports[origin]:
                dist[origin][dest] = 1

        for k in range(V):
            for i in range(V):
                for j in range(V):
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

        # find total cost and return
        inf_to_zero = lambda x: 0 if x == float("inf") else x
        return sum(inf_to_zero(dist[origin][dest]) for origin, dest in shipments)
