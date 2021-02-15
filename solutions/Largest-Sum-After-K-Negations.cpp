int solve(vector<int> &nums, int k)
{
    // in one pass
    // - collect all negative integers
    // - sum all positive integers
    // - find smallest val ie min(abs(x))
    vector<int> neg;
    int positiveSum = 0;
    int smallest = INT_MAX;

    for (int n : nums)
    {
        if (n < 0)
            neg.push_back(n);
        else
            positiveSum += n;

        smallest = abs(n) < smallest ? abs(n) : smallest;
    }

    int res = positiveSum;
    if (k >= neg.size())
    {
        // negate all negative integers
        res += -1 * accumulate(neg.begin(), neg.end(), 0);

        int remaining = k - neg.size();
        return remaining % 2 == 0 ? res : res - 2 * smallest;
    }
    else
    {
        // only negate the most negative ones
        sort(neg.begin(), neg.end());

        for (int i = 0; i < neg.size(); i++)
        {
            if (i >= k)
            {
                // dont negate
                res += neg[i];
            }
            else
            {
                // negate
                res += -1 * neg[i];
            }
        }
        return res;
    }
}
