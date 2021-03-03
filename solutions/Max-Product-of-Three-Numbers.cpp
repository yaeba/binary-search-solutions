int solve(vector<int> &nums)
{
    // max is either
    // - min * min_2 * max or
    // - max_3 * max_2 * max

    int min1, min2;
    min1 = min2 = INT_MAX;
    int max1, max2, max3;
    max1 = max2 = max3 = INT_MIN;

    for (int n : nums)
    {
        if (n <= min1)
        { // new min1, min2 will be old min1
            min2 = min1;
            min1 = n;
        }
        else if (n <= min2)
        { // n between (min1, min2)
            min2 = n;
        }
        if (n >= max1)
        { // new max1, max2 = old max1, max3 = old max2
            max3 = max2;
            max2 = max1;
            max1 = n;
        }
        else if (n >= max2)
        { // n between [max2, max1)
            max3 = max2;
            max2 = n;
        }
        else if (n >= max3)
        { // n between [max3, max2)
            max3 = n;
        }
    }
    return max(min1 * min2 * max1, max3 * max2 * max1);
}
