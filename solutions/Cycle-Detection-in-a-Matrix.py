class Solution:
    def solve(self, matrix):
        n_rows = len(matrix)
        n_cols = len(matrix[0])

        seen = set()

        def explore(node):
            stack = [(node, None)]

            while stack:
                (curr_x, curr_y), prev = stack.pop()
                seen.add((curr_x, curr_y))

                for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    next_x, next_y = curr_x + x, curr_y + y
                    if not 0 <= next_x < n_rows or not 0 <= next_y < n_cols:
                        continue
                    elif (next_x, next_y) == prev:
                        continue
                    elif matrix[next_x][next_y] != matrix[curr_x][curr_y]:
                        continue

                    if (next_x, next_y) in seen:
                        # found loop
                        return True

                    # explore further
                    stack.append([(next_x, next_y), (curr_x, curr_y)])

            return False

        for x in range(n_rows):
            for y in range(n_cols):
                if (x, y) in seen:
                    continue
                elif explore((x, y)):
                    return True

        return False
