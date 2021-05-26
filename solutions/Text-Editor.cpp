string solve(string s)
{
    string res = "";
    int i = 0;

    while (i < s.size())
    {
        if (s[i] == '<' && i + 1 < s.size() && s[i + 1] == '-')
        {
            if (!res.empty())
                res.pop_back();
            i++;
        }
        else
        {
            res += s[i];
        }
        i++;
    }

    return res;
}
