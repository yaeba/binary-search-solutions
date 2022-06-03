class Solution:
    def solve(self, s):
        counts = defaultdict(int)
        depth = max_depth = 0
        for c in s:
            if c == "X":
                counts[depth] += 1
            elif c == "(":
                depth += 1
            else:
                depth -= 1
            max_depth = max(max_depth, depth)

        return [counts[d] for d in range(1, max_depth + 1)]
