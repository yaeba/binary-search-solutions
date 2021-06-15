int solve(string s)
{
    int d = 0;
    int n = 0;

    for (char c : s)
    {
        if (c == '?')
            n++;
        else if (c == 'L')
            d--;
        else
            d++;
    }

    return abs(d) + n;
}
