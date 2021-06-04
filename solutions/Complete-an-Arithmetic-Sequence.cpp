int solve(vector<int> &nums)
{
    int n = nums.size() + 1;
    int first = nums[0];
    int last = nums[nums.size() - 1];

    int step = (last - first) / (n - 1);

    int running = first - step;

    for (int n : nums)
    {
        running += step;
        if (running != n)
            return running;
    }

    // not missing, step = 0
    return first;
}
