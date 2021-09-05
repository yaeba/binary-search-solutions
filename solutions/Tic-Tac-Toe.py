from collections import defaultdict


class TicTacToe:
    def __init__(self, n):
        self.size = n
        self.rows = defaultdict(list)
        self.cols = defaultdict(list)
        self.diag1 = []
        self.diag2 = []

    def move(self, r, c, me):
        self.rows[r].append(me)
        self.cols[c].append(me)
        if r == c:
            self.diag1.append(me)
        if r == self.size - 1 - c:
            self.diag2.append(me)

        return self.check_winner(r, c, me)

    def check_winner(self, r, c, me):
        won = (
            (len(self.rows[r]) == self.size and len(set(self.rows[r])) == 1)
            or (len(self.cols[c]) == self.size and len(set(self.cols[c])) == 1)
            or (len(self.diag1) == self.size and len(set(self.diag1)) == 1)
            or (len(self.diag2) == self.size and len(set(self.diag2)) == 1)
        )

        if won:
            return 1 if me else -1
        return 0
