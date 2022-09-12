class Solution:
    def solve(self, nums):
        ## regardless of how bob plays the game
        ## there's a way for alice to select 3 integers such that
        ## she can remove at least 1 repeated integer every time

        ## eg let n = repeated integers
        ## n = 1, turns = 1, (1st turn remove 1)
        ## n = 2, turns = 1, (1st turn remove 2)
        ## n = 3, turns = 2, (1st turn remove 2, 2nd turn remove 1)
        ## n = 4, turns = 2, (1st turn remove 2, 2nd turn remove 2)
        ## ...

        n = len(nums) - len(set(nums))
        return (n + 1) // 2
