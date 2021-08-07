vector<int> solve(vector<int> &nums)
{
    for (int i = 2; i < nums.size(); i += 4)
    {
        std::swap(nums[i], nums[i - 2]);

        int j = i + 1;
        if (j < nums.size())
            std::swap(nums[j], nums[j - 2]);
    }
    return nums;
}
