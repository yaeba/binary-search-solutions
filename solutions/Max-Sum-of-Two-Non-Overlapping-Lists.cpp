int solve(vector<int> &nums, int a, int b)
{
    // calculate dpA and dpB (max seen sublist sum)
    vector<int> dpA, dpB;

    int currA = 0, currB = 0;
    int res = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        currA += nums[i];
        currB += nums[i];

        if (i >= a)
            currA -= nums[i - a];
        if (i >= a - 1)
            dpA.push_back(max(currA, dpA.empty() ? INT_MIN : dpA.back()));

        if (i >= b)
            currB -= nums[i - b];
        if (i >= b - 1)
            dpB.push_back(max(currB, dpB.empty() ? INT_MIN : dpB.back()));

        if (i >= a + b - 1)
        {
            res = max(res, currA + dpB.end()[-a - 1]);
            res = max(res, currB + dpA.end()[-b - 1]);
        }
    }

    return res;
}
