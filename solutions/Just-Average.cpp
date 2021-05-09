bool solve(vector<int> &nums, int k)
{
    long s = accumulate(nums.begin(), nums.end(), 0);
    long target = k * (nums.size() - 1);

    for (int n : nums)
    {
        if (s - n == target)
            return true;
    }
    return false;
}
