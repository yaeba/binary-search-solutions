vector<int> solve(vector<int> &nums)
{
    int idx = 0;

    for (int i = 0; i < nums.size();)
    {
        nums[idx++] = nums[i];

        if (i + 1 < nums.size() && nums[i + 1] == nums[i])
        {
            nums[idx++] = nums[i + 1];
            i = std::upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
        }
        else
        {
            i++;
        }
    }

    nums.resize(idx);
    return nums;
}
