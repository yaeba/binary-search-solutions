class Solution:
    def solve(self, weights, values, capacity):
        res = 0
        EPS = 1e-9
        for weight, value in sorted(zip(weights, values), key=lambda x: x[0] / (x[1] + EPS)):
            prop = min(capacity, weight) / weight
            res += int(prop * value)
            capacity -= prop * weight

        return res
