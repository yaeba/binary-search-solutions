class Solution:
    def solve(self, piles):
        ## solve greedily
        ## piles  =     [2, 4, 1, 3, 5, 6]
        ## sorted =     [1, 2, 3, 4, 5, 6]
        ## res    = sum([      3,    5   ])
        return sum(sorted(piles)[(len(piles) // 3) :: 2])
