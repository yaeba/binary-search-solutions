vector<int> solve(vector<int> &nums)
{
    std::sort(nums.begin(), nums.end(), std::greater<int>());

    vector<int> res;
    int idx = 0;
    int size = nums.size();

    for (int idx = 0; idx < size; idx++)
    {
        if (idx % 2 == 0)
            res.push_back(nums[idx / 2]);
        else
            res.push_back(nums[size - 1 - idx / 2]);
    }

    return res;
}
