int solve(vector<int> &nums, int k)
{
    // idea from unbounded knapsack
    // dp[x] holds number of ways that sum to x
    vector<int> dp(k + 1);
    dp[0] = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        // nums[i] will contribute to number of ways that sum to
        // j, where nums[i] <= j <= k
        for (int j = 0; j <= k; j++)
        {
            if (j >= nums[i])
                dp[j] += dp[j - nums[i]];
        }
    }

    return dp[k];
}
