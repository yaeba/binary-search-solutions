vector<int> solve(vector<int> &nums)
{
    vector<int> even, odd;

    for (int i : nums)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    vector<int> res;
    int o = 0, e = 0;

    for (int i : nums)
    {
        if (i % 2 == 0)
            res.push_back(even[e++]);
        else
            res.push_back(odd[o++]);
    }

    return res;
}
