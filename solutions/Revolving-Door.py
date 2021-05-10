class Solution:
    def solve(self, requests):
        grouped = [
            (g, list(map(lambda y: y[1], x)))
            for (g, x) in itertools.groupby(sorted(requests), lambda x: x[0])
        ]

        time = 0
        pos = 1
        res = []

        for (i, inAndOut) in grouped:
            if i > time:
                pos = 1
                time = i

            for x in sorted(inAndOut, reverse=pos):
                res.append((time, x))
                time += 1
                pos = x

        return res
