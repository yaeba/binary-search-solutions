int solve(vector<int> &nums)
{
    int swapToLeftIdx = INT_MAX;
    // from left to right
    for (int left = 1; left < nums.size(); left++)
    {

        if (nums[left] < nums[left - 1])
        {
            int temp;
            // find where to left should it go to
            for (int i = left - 1; i >= 0 && nums[i] > nums[left]; i--)
            {
                temp = i;
            }
            swapToLeftIdx = min(swapToLeftIdx, temp);
        }
    }

    int swapToRightIdx = INT_MIN;
    // from right to left
    for (int right = nums.size() - 1 - 1; right >= 0; right--)
    {
        if (nums[right] > nums[right + 1])
        {
            int temp;
            // find where to right should it go to
            for (int i = right + 1; i < nums.size() && nums[i] < nums[right]; i++)
            {
                temp = i;
            }
            swapToRightIdx = max(swapToRightIdx, temp);
        }
    }

    return swapToLeftIdx >= swapToRightIdx ? 0 : swapToRightIdx - swapToLeftIdx + 1;
}
