int solveR(vector<int> &nums, int lower, int upper)
{
    if (lower > upper)
        return -1;
    else if (nums[lower] == lower)
        return lower;
    else
    {
        int middle = (lower + upper + 1) / 2;

        if (nums[middle] < middle)
            return solveR(nums, middle + 1, upper);
        else
            return solveR(nums, lower + 1, middle);
    }
}

int solve(vector<int> &nums)
{
    return solveR(nums, 0, nums.size() - 1);
}
