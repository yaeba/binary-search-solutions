vector<int> solve(vector<int> &nums)
{
    // if a number if present, mark index(number) as negative
    // eg [2,  2,  3]
    // => [2, -2, -3] because 2 and 3 present
    for (int n : nums)
    {
        int idx = abs(n) - 1;
        if (nums[idx] > 0)
            nums[idx] = -nums[idx];
    }

    // find non-negative ones
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
            nums[count++] = i + 1;
    }
    nums.resize(count);

    return nums;
}
