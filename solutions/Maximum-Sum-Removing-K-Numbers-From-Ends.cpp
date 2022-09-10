int solve(vector<int> &nums, int k)
{
    if (!k)
        return 0;
    int res = INT_MIN;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int windowLen = nums.size() - k;
    int windowSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        windowSum += nums[i];
        if (i + 1 < windowLen)
            continue;
        else if (i + 1 > windowLen)
            windowSum -= nums[i - windowLen];
        res = max(res, sum - windowSum);
    }

    return res;
}
