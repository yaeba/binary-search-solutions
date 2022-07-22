int solve(vector<int> &nums)
{
    // use kadane's alg to find max and min sublist sum
    // answer is the max(abs(maxSublistSum), abs(minSublistSum))
    int globalMax = 0, localMax = 0;
    int globalMin = 0, localMin = 0;

    for (int num : nums)
    {
        localMax = max(localMax + num, num);
        localMin = min(localMin + num, num);
        globalMax = max(globalMax, localMax);
        globalMin = min(globalMin, localMin);
    }

    return max(globalMax, abs(globalMin));
}
