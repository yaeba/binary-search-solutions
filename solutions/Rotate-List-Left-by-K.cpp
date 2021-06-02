vector<int> solve(vector<int> &nums, int k)
{
    std::rotate(nums.begin(), nums.begin() + k, nums.end());
    return nums;
}
