int solve(vector<int> &weights, vector<int> &values, int capacity)
{
    // unbounded knapsack
    vector<int> dp(capacity + 1);
    for (int cap = 0; cap <= capacity; cap++)
    {
        for (int item = 0; item < weights.size(); item++)
        {
            if (weights[item] <= cap)
                dp[cap] = max(dp[cap], dp[cap - weights[item]] + values[item]);
        }
    }

    return dp[capacity];
}
