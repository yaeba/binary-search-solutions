int solve(vector<int> &nums, int k)
{
    // maintain sliding window containing at most k 0s
    int nZeros = 0, start = 0;
    int res = 0;

    for (int end = 0; end < nums.size(); end++)
    {
        nZeros += nums[end] == 0;
        while (nZeros > k)
        {
            nZeros -= nums[start] == 0;
            start++;
        }
        res = max(res, end - start + 1);
    }

    return res;
}
