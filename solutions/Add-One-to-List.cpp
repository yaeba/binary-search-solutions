vector<int> solve(vector<int> &nums)
{
    // modify the nums inplace
    int add = 1;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        nums[i] += add;

        if (nums[i] == 10)
        {
            // continue to add in front
            add = 1;
            nums[i] = 0;
        }
        else
        {
            // end loop
            add = 0;
            break;
        }
    }

    if (add)
        nums.insert(nums.begin(), 1);

    return nums;
}
