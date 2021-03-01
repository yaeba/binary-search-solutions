string solve(string s)
{
    if (s.empty())
        return s;
    ostringstream o;
    char prev = s[0];
    int idx = 1;
    o << prev;

    while (idx < s.length())
    {
        if (s[idx] != prev)
        {
            o << s[idx];
            prev = s[idx];
        }
        idx++;
    }

    return o.str();
}
