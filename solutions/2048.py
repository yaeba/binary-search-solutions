import itertools as it


class Solution:
    def solve(self, board, direction):
        def sum_pair(seq):
            i = iter(seq)
            for x in i:
                yield x + next(i, 0)

        def move_left(b):
            res = []
            for row in b:
                filtered = [x for x in row if x]
                merged = [x for k, g in it.groupby(filtered) for x in sum_pair(g) if k]
                res.append(merged + [0] * (len(row) - len(merged)))

            return res

        def mirror(b):
            return [row[::-1] for row in b]

        def transpose(b):
            return list(zip(*b))

        if direction == "left":
            return move_left(board)
        elif direction == "right":
            return mirror(move_left(mirror(board)))
        elif direction == "up":
            return transpose(move_left(transpose(board)))
        elif direction == "down":
            return transpose(mirror(move_left(mirror(transpose(board)))))
