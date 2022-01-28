int solve(vector<int> &nums, int k)
{
    // nums = [1, 3, 4, 10], k = 4
    nums.push_back(INT_MAX);
    // nums = [1, 3, 4, 10, 2^31-1]
    vector<int> missing;
    for (int i = 0; i < nums.size(); i++)
    {
        missing.push_back(nums[i] - nums[0] - i);
    }
    // missing = [0, 1, 1, 6, 2^31-6]
    auto q = upper_bound(missing.begin(), missing.end(), k);
    int idx = q - missing.begin();
    // binary search, first idx > 4 is 3
    // res = nums[3] - (missing[3] - 4)
    // res = 10 - (6 - 4)
    return nums[idx] - (missing[idx] - k);
}
