bool solve(vector<int> &nums)
{
    if (nums.size() < 3)
        return false;

    // square all numbers
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] *= nums[i];
    }

    // sort nums
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = nums.size() - 2;
        int k = nums.size() - 1;

        while (j > i)
        {
            int target = nums[k] - nums[j];

            if (target == nums[i])
            {
                // found
                return true;
            }
            else if (target > nums[i])
            {
                // c too big
                k--;
                if (j == k)
                    j--;
            }
            else
            {
                // b too big
                j--;
            }
        }
    }

    return false;
}
