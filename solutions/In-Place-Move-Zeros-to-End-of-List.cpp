vector<int> solve(vector<int> &nums)
{
    int size = nums.size();
    int start = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i])
            nums[start++] = nums[i];
    }

    while (start < size)
        nums[start++] = 0;

    return nums;
}
