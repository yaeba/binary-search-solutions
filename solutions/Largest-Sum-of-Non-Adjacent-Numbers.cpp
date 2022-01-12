int solve(vector<int> &nums)
{
    int oldMax = 0, newMax = 0;
    for (int num : nums)
    {
        int temp = newMax;
        newMax = max(newMax, oldMax + num);
        oldMax = temp;
    }
    return newMax;
}
