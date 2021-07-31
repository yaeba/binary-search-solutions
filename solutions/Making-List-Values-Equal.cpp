int solve(vector<int> &nums)
{
    int min = INT_MAX, max = INT_MIN;

    for (int num : nums)
    {
        min = std::min(min, num);
        max = std::max(max, num);
    }

    return max - min;
}
