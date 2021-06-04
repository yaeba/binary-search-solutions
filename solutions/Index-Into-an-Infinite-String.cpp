string solve(string s, int i, int j)
{
    ostringstream o;
    int len = s.length();

    for (; i < j; i++)
    {
        o << s[i % len];
    }

    return o.str();
}
