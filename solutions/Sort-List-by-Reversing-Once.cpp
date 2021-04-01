bool solve(vector<int> &nums)
{
    // there are a few conditions for this to be true
    // 1. all increasing
    // 2. all decreasing
    // 3. increasing (A) -> decreasing (B) -> (maybe) increasing (C)
    // in (3)
    // - min(B) should be at least max(A)
    // - min(C) should be at least max(B)

    if (nums.size() == 0)
        return true;

    int largestInA = INT_MIN, largestInB = INT_MIN;
    int idx = 0;

    // loop until it starts to decrease
    for (; idx < nums.size() - 1 && nums[idx + 1] - nums[idx] >= 0; idx++)
    {
        if (nums[idx + 1] > nums[idx])
            largestInA = nums[idx];
    }
    largestInB = nums[idx];
    idx++;

    // while it is decreasing, all values (in B) should be >= largestInA
    for (; idx < nums.size() && nums[idx - 1] - nums[idx] >= 0; idx++)
    {
        if (nums[idx] < largestInA)
            return false;
    }

    int largestInC = nums[idx];
    // the remaining one should be all increasing and >=  largestInB
    for (int rest = idx; rest < nums.size(); largestInC = nums[rest++])
    {
        if (nums[rest] < largestInB || nums[rest] < largestInC)
        {
            return false;
        }
    }

    return true;
}
