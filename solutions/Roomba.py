class Solution:
    def solve(self, moves, x, y):
        newX = 0
        newY = 0

        for move in moves:
            if move == "NORTH":
                newY += 1
            elif move == "SOUTH":
                newY -= 1
            elif move == "EAST":
                newX += 1
            elif move == "WEST":
                newX -= 1

        return newX == x and newY == y
