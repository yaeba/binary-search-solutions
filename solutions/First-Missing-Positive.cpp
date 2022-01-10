int solve(vector<int> &nums)
{
    int size = nums.size();
    int i = 0;
    while (i < size)
    {
        int j = nums[i] - 1;
        if (nums[i] > 0 && nums[i] <= size && nums[i] != nums[j])
        {
            swap(nums[i], nums[j]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }
    return size + 1;
}
