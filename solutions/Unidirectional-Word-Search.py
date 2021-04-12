class Solution:
    def solve(self, board, word):
        return any([word in "".join(row) for row in board]) or any(
            [word in "".join(col) for col in map(list, zip(*board))]
        )
