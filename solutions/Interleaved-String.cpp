string solve(string s0, string s1)
{
    ostringstream res;

    int i = 0, j = 0;

    for (; i < s0.length() && j < s1.length(); i++, j++)
    {
        res << s0[i];
        res << s1[j];
    }

    for (; i < s0.length(); i++)
        res << s0[i];

    for (; j < s1.length(); j++)
        res << s1[j];

    return res.str();
}
