int solve(vector<int> &nums)
{
    int lowestPrefixSum = 0;
    int running = 0;

    // find prefixSums at every positive
    for (int n : nums)
    {
        running += n;
        // keep track of the lowest prefixSum seen in the vector
        lowestPrefixSum = min(lowestPrefixSum, running);
    }

    // to make all prefixSums > 0, just need to make the lowest prefixSum > 0
    return -1 * lowestPrefixSum + 1;
}
