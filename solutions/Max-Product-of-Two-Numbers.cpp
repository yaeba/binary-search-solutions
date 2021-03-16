int solve(vector<int> &nums)
{
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int n : nums)
    {
        if (n <= min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
        {
            min2 = n;
        }

        if (n >= max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        {
            max2 = n;
        }
    }

    return max(min1 * min2, max1 * max2);
}
