vector<int> LIS(vector<int> nums)
{
    vector<int> res, tmp;

    for (int n : nums)
    {
        if (tmp.empty() || tmp.back() < n)
        {
            tmp.push_back(n);
        }
        else
        {
            auto it = lower_bound(tmp.begin(), tmp.end(), n);
            *it = n;
        }
        res.push_back(tmp.size());
    }

    return res;
}

int solve(vector<int> &nums)
{
    vector<int> lis = LIS(nums);
    reverse(nums.begin(), nums.end());
    vector<int> lds = LIS(nums);

    int res = 0, size = nums.size();
    for (int i = 0; i < size; i++)
    {
        res = max(res, lis[i] + lds[size - i - 1] - 1);
    }

    return res;
}
