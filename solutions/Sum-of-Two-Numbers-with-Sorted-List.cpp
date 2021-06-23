bool solve(vector<int> &nums, int k)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == k)
            return true;
        else if (sum < k)
            left++;
        else
            right--;
    }

    return false;
}
