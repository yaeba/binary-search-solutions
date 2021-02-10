int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int k = nums.size();

    while (k > 0)
    {
        int idx = nums.size() - k;
        // check the num at idx
        int n = nums[idx];
        if (n >= k)
        {
            // at least k numbers >= k
            // check previous, if n_prev also >= k then false
            // because we want exactly k numbers >= k
            if (idx == 0 || nums[idx - 1] < k)
                return k; // found it
        }
        k--;
    }

    return -1;
}
