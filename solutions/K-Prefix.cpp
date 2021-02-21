int solve(vector<int> &nums, int k)
{
    if (nums.empty())
        return -1;

    // calculate prefix sum
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }

    // search for right to left (maximum possible i)
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] <= k)
            return i;
    }
    return -1;
}
