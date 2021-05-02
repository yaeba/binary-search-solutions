int solve(vector<int> &nums, int k, int target)
{
    int s = accumulate(nums.begin(), nums.end(), 0);

    int diff = abs(target - s);

    return ceil(diff * 1.0 / k);
}
