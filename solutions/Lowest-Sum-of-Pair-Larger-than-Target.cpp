int solve(vector<int> &nums, int target)
{
    int res = INT_MAX;
    int lo = 0, hi = nums.size() - 1;
    std::sort(nums.begin(), nums.end());
    while (lo < hi)
    {
        int sum = nums[lo] + nums[hi];
        if (sum <= target)
        {
            lo++;
        }
        else
        {
            res = std::min(res, sum);
            hi--;
        }
    }
    return res;
}
