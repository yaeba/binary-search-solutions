int solve(string s)
{
    int res = 0, mod = 1e9 + 7;

    for (int i = 0, ones = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            ones = 0;
        }
        else
        {
            ones++;
            res = (res + ones) % mod;
        }
    }
    return res;
}
