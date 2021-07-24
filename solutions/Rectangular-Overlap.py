class Solution:
    def solve(self, rect0, rect1):
        def intervals_overlap(start0, end0, start1, end1):
            return start0 < end1 and start1 < end0

        [ax0, ay0, ax1, ay1] = rect0
        [bx0, by0, bx1, by1] = rect1

        return intervals_overlap(ax0, ax1, bx0, bx1) and intervals_overlap(
            ay0, ay1, by0, by1
        )
