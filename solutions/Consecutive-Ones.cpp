bool solve(vector<int> &nums)
{
    bool seen = false;

    int i = 0;

    while (i < nums.size())
    {
        int n = nums[i];

        if (n == 1)
        {
            if (!seen)
                seen = true;
            else if (nums[i - 1] != 1)
                return false;
        }

        i++;
    }

    return true;
}
