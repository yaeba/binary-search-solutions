class Solution:
    def solve(self, nums):
        nums = sorted(nums)
        lst = [{1}]

        for num in nums:
            idx = len(lst) - 1
            while all(num % x for x in lst[idx]):
                idx -= 1
            if idx + 1 >= len(lst):
                lst.append(set())
            lst[idx + 1].add(num)

        return len(lst) - 1
