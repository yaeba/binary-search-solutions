# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, nums):
        mid = len(nums) // 2
        return (
            Tree(nums[mid], self.solve(nums[:mid]), self.solve(nums[mid + 1 :]))
            if nums
            else None
        )
