vector<vector<int>> solve(vector<int> &nums)
{
    vector<vector<int>> res;

    auto it = nums.begin();

    while (it != nums.end())
    {
        auto curr = it;
        while (it != nums.end() && *it == *curr)
            it++;
        res.emplace_back(it - curr, *curr);
    }

    return res;
}
