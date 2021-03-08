int solve(string s)
{
    unordered_set<int> set;

    for (int i = 0; i < s.length(); i++)
    {
        auto it = set.find(s[i]);
        if (it == set.end())
        {
            set.insert(s[i]);
        }
        else
        {
            return i;
        }
    }

    return -1;
}
