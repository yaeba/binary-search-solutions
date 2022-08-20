class Solution:
    def solve(self, matrix):
        OBSTACLE = "*"
        BOX = "#"
        SPACE = "."

        # for every row, process the rowstring so that
        # BOXes are right aligned to OBSTACLEs
        for r in range(len(matrix)):
            row = [
                (BOX * substr.count(BOX)).rjust(len(substr), SPACE)
                for substr in "".join(matrix[r]).split(OBSTACLE)
            ]
            matrix[r] = list(OBSTACLE.join(row))

        # rotate and return
        return list(zip(*matrix[::-1]))
