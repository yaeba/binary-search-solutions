class Solution:
    def solve(self, logs, limit):
        running = 0
        for idx, size in enumerate(sorted(logs)):
            n_left = len(logs) - idx
            if running + n_left * size >= limit:
                truncated_size = (limit - running) // n_left
                return truncated_size
            running += size

        return max(logs)
