bool solve(vector<int> &nums)
{
    int size = nums.size();

    if (size <= 1)
        return false;
    else
    {
        int max = INT_MIN, secondMax = INT_MIN;

        // determine max and secondMax
        for (int i = 0; i < size; i++)
        {
            int n = nums[i];
            if (n > max)
            {
                secondMax = max;
                max = n;
            }
            else if (secondMax < n && n <= max) // between (secondMax, max]
                // secondMax can be the same as max
                secondMax = n;
        }

        // if secondMax is negative, 2*secondMax definitely smaller
        if (secondMax < 0)
            return true;
        else
        {
            // max and secondMax both >= 0, true if the difference > secondMax
            int diff = max - secondMax;
            return diff > secondMax;
        }
    }
}
