bool solve(vector<int> &nums)
{
    // go from right to left, determine if each position
    // can reach last position, if yes, it is sufficient to just
    // be able to reach this position
    int size = nums.size();
    if (size == 1)
    {
        return true;
    }
    else if (nums[0] == 0)
    {
        return false;
    }

    int lastReachable = size - 1;

    for (int i = lastReachable - 1; i >= 0; i--)
    {
        if (i + nums[i] >= lastReachable)
        {
            // it is enough to just reach at this index
            lastReachable = i;
        }
    }

    return lastReachable == 0;
}
