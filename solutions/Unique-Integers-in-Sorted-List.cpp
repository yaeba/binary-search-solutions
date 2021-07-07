int solve(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int res = 1;
    auto it = std::upper_bound(nums.begin(), nums.end(), nums[0]);

    while (it != nums.end())
    {
        res++;
        int val = *it;
        it = std::upper_bound(nums.begin(), nums.end(), val);
    }

    return res;
}
