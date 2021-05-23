bool solve(vector<int> &nums)
{
    if (nums.size() <= 1)
        return false;

    int max = nums[0];     // max seen so far
    int leftMax = nums[0]; // max in the left sublist
    int leftSize = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        // update max seen so far
        max = nums[i] > max ? nums[i] : max;

        if (nums[i] <= leftMax)
        {
            // expand left
            leftSize = i + 1;
            leftMax = max;
        }
    }

    // true if leftSize is not numsSize
    return leftSize < nums.size();
}
