int solve(vector<int> &nums)
{
    vector<int> v;

    for (int n : nums)
    {
        if (v.empty() || v.back() < n)
        {
            v.push_back(n);
        }
        else
        {
            auto it = lower_bound(v.begin(), v.end(), n);
            *it = n;
        }
    }

    return v.size();
}
