bool solve(vector<int> &nums)
{
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++)
    {
        int diff = nums[i] - nums[i - 1];

        if (diff <= 0)
            increasing = false;
        if (diff >= 0)
            decreasing = false;

        if (!increasing && !decreasing)
            return false;
    }

    return true;
}
