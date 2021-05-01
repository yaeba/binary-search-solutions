vector<int> solve(vector<vector<int>> &relations)
{
    set<int> s;
    set<pair<int, int>> r;

    for (auto pair : relations)
    {
        r.insert({pair[0], pair[1]});
    }

    for (auto pair : r)
    {
        if (r.find({pair.second, pair.first}) != r.end())
        {
            s.insert(pair.first);
            s.insert(pair.second);
        }
    }

    return vector<int>(s.begin(), s.end());
}
