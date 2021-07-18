int solve(vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());
    int maxLen = INT_MIN;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        int start = i == 0 ? 0 : nums[i - 1];
        int end = i == size - 1 ? 100001 : nums[i + 1];
        int len = end - start - 1;

        maxLen = std::max(len, maxLen);
    }

    return maxLen;
}
