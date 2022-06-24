int solve(vector<int> &nums, int target)
{
    // textbook example for two pointers usecase
    sort(nums.begin(), nums.end());

    int res = 0;
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            left++;
            right--;
            res++;
        }
        else if (nums[left] + nums[right] < target)
            left++;
        else
            right--;
    }

    return res;
}
