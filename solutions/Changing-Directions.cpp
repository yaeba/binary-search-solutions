int solve(vector<int> &nums)
{
    int size = nums.size();

    if (size <= 1)
        return 0;

    int delta = nums[1] - nums[0];
    int res = 0;

    for (int i = 2; i < size; i++)
    {
        int nextDelta = nums[i] - nums[i - 1];

        if (delta >= 0 && nextDelta >= 0)
            ;
        else if (delta <= 0 && nextDelta <= 0)
            ;
        else
            res++;

        delta = nextDelta;
    }

    return res;
}
