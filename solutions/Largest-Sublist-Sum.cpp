int solve(vector<int> &nums)
{
    // kadane's alg
    int globalMax = INT_MIN, localMax = 0;
    for (int num : nums)
    {
        localMax = max(num, num + localMax);
        globalMax = max(globalMax, localMax);
    }

    return globalMax;
}