int solve(vector<int> &nums)
{
    int minimum = INT_MAX;

    // determinie mininum
    for (int n : nums)
    {
        minimum = min(n, minimum);
    }

    // iterate, accumulate difference to mininum
    int res = 0;
    for (int n : nums)
    {
        res += n - minimum;
    }
    return res;

    return 0;
}
