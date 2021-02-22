vector<int> solve(vector<int> &nums)
{
    if (nums.size() == 0)
        return {};

    int leftMin = nums[0];
    nums[0] = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];
        nums[i] = leftMin;
        leftMin = min(leftMin, temp);
    }

    return nums;
}
