bool solve(string s0, string s1)
{
    if (s0.length() != s1.length())
        return false;

    unordered_map<char, int> map;

    for (int i = 0; i < s0.length(); i++)
    {
        map[s0[i]]++;
        map[s1[i]]--;
    }

    for (auto p : map)
    {
        if (p.second)
            return false;
    }

    return true;
}
