string solve(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != 'a')
        {
            s[i] = 'a';
            return s;
        }
    }

    s.back() = 'b';
    return s;
}
