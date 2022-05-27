class Solution:
    def solve(self, start, end):
        res = []
        queue = [x for x in range(1, 10)]
        for num in queue:
            if start <= num <= end:
                res.append(num)
            elif num > end:
                break

            last_digit = num % 10
            if last_digit != 9:
                queue.append(num * 10 + last_digit + 1)

        return res
