int solve(string s)
{
    if (s.empty())
        return 0;

    int res = 0;
    int prev = s[0];
    int running = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
        {
            running++;
        }
        else
        {
            res = max(res, running);
            running = 1;
            prev = s[i];
        }
    }

    return max(res, running);
}
