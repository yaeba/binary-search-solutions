class Solution:
    def solve(self, nums):
        if not nums:
            return None

        # find left_max at every index
        left_max = [nums[0]]
        for num in nums[1:]:
            left_max.append(max(num, left_max[-1]))

        # find right_min at every index
        right_min = [nums[-1]]
        for num in nums[-2::-1]:
            right_min.append(min(num, right_min[-1]))
        right_min = right_min[::-1]

        # find first occurrence of left_max <= right_min
        for idx, (a, b) in enumerate(zip(left_max, right_min[1:])):
            if a <= b:
                return idx + 1

        return None
