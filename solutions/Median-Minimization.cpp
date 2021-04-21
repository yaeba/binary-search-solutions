int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    // size/2 guaranteed to be odd
    // eg size = 6, medianLeft = idx 2, medianRight = idx 3
    int medianLeft = nums.size() / 2 - 1;
    int medianRight = medianLeft + 1;

    return nums[medianRight] - nums[medianLeft];
}
