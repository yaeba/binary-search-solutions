class Solution:
    def solve(self, coordinates):
        if len(coordinates) < 2:
            return False
        return (
            len(
                set(
                    (y2 - y1) / (x2 - x1) if x2 - x1 else float("inf")
                    for ((x1, y1), (x2, y2)) in zip(coordinates, coordinates[1:])
                )
            )
            == 1
        )
