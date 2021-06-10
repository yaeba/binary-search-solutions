int solve(vector<int> &nums)
{
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        rightSum -= nums[i];
        leftSum += nums[i];
        if (rightSum == leftSum - nums[i])
            return i;
    }

    return -1;
}
