class Solution:
    def isEven(n):
        return n % 2 == 0

    def solve(self, nums):
        evenIdx = [idx for (idx, ele) in enumerate(nums) if Solution.isEven(ele)]
        oddIdx = [idx for (idx, ele) in enumerate(nums) if not Solution.isEven(ele)]

        sortedNums = sorted(nums)

        for n in sortedNums:
            if Solution.isEven(n):
                nums[evenIdx.pop(0)] = n
            else:
                nums[oddIdx.pop()] = n

        return nums
