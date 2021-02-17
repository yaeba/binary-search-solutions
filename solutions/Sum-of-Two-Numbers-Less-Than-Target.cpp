int solve(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    int res = INT_MIN;

    while (left < right)
    {
        int s = nums[left] + nums[right];

        if (s >= target)
        {
            right--;
        }
        else
        {
            res = max(res, s);
            left++;
        }
    }

    return res;

    return 0;
}
